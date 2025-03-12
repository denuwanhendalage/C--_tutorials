#include <iostream>
#include <algorithm>
#include <fstream>
#include <chrono>
#include <cstdlib>

using namespace std;

// function to heapify the tree
void heapify(int arr[], int n, int root) {
    // build heapify
    int max = root;
    int left = 2 * root + 1;
    int right = 2 * root + 2;
    if (left < n && arr[left] > arr[max]) {
        max = left;
    }
    if (right < n && arr[right] > arr[max]) {
        max = right;
    }
    if (max != root) {
        swap(arr[root], arr[max]);
        heapify(arr, n, max);
    }
}

// implementing heap sort
void heapSort(int arr[], int n) {
    // build heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // extracting elements from heap one by one
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    ofstream outfile("sorting_time.txt");
    if (!outfile.is_open()) {
        cerr << "Error opening output file" << endl;
        return 1;
    }

    outfile << "Array Size, Time (nanoseconds)" << endl;

    for (int size = 3; size <= 5000; size++) {
        int *arr = new int[size];


        for (int i = 0; i < size; i++) {
            arr[i] = rand() % 100;
        }

        auto start = chrono::high_resolution_clock::now();
        heapSort(arr, size);
        auto end = chrono::high_resolution_clock::now();

        auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
        cout << "Array size: " << size << ", Time taken: "
             << duration.count() << " nanoseconds" << endl;

        outfile << size << ", " << duration.count() << endl;

        delete[] arr; 
    }

    outfile.close();
    return 0;
}
