#include <iostream>
#include <vector>
#include <stack>
#include <chrono>
#include <fstream>
#include <random>
#include <algorithm>

using namespace std;

void quickSort(vector<int>& array, int low_index, int high_index) {
    stack<pair<int, int>> stack;
    stack.push({low_index, high_index});

    while (!stack.empty()) {
        low_index = stack.top().first;
        high_index= stack.top().second;
        stack.pop();

        if (low_index < high_index) {
            int pivot = array[low_index];
            int i = low_index + 1, j = high_index;

            while (i <= j) {
                while (i <= j && array[i] <= pivot) i++;
                while (i <= j && array[j] > pivot) j--;

                if (i < j) {
                    swap(array[i], array[j]);
                    i++;
                    j--;
                }
            }

            swap(array[low_index], array[j]);

            stack.push({low_index, j - 1});
            stack.push({j + 1, high_index});
        }
    }
}

int main() {
    ofstream outputFile("Iterative_Quick_Sort_Time.txt");

    for (int size = 3; size <= 1000; size++) {
        vector<int> array(size);


        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int> dist(1, 100);
        std::generate(array.begin(), array.end(), [&dist, &gen]() { return dist(gen); }); // Capture dist and gen by value


        auto start = chrono::high_resolution_clock::now();
        quickSort(array, 0, size - 1);
        auto end = chrono::high_resolution_clock::now();
        auto duration_ns = chrono::duration_cast<chrono::nanoseconds>(end - start).count();


        outputFile << size << " " << duration_ns << endl;
    }

    outputFile.close();
    return 0;
}
