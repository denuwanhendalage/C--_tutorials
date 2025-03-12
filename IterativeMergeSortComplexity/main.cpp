#include <iostream>
#include <vector>
#include <sstream>
#include <chrono>
#include <algorithm>
#include <random>
#include <fstream>
using namespace std;

void merge(vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1, 100);

    ofstream outputFile("Iterative_Merge_Sort.txt"); // Open output file

    for (int size = 3; size <= 50; size++) {
        vector<int> arr(size);
        generate(arr.begin(), arr.end(), [&]() { return dist(gen); });

        auto start = chrono::high_resolution_clock::now();
        mergeSort(arr, 0, arr.size() - 1);
        auto end = chrono::high_resolution_clock::now();
        auto duration_ns = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
        outputFile << size << " " << duration_ns << endl; // Write data to file
    }

    outputFile.close(); // Close output file
    return 0;
}
