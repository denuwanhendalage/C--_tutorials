#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Execute Gnuplot commands
    FILE* gnuplotPipe = popen("gnuplot -persist", "w");
    if (gnuplotPipe) {
        fprintf(gnuplotPipe, "set title 'Merge Sort Time Complexity'\n");
        fprintf(gnuplotPipe, "set xlabel 'Array Size'\n");
        fprintf(gnuplotPipe, "set ylabel 'Time (ns)'\n");
        fprintf(gnuplotPipe, "plot 'merge_sort_data.txt' with linespoints\n");
        fflush(gnuplotPipe);
        cout << "Press enter to exit..." << endl;
        getchar(); // Wait for user to press enter
        pclose(gnuplotPipe); // Close pipe
    } else {
        cerr << "Error: Gnuplot not found!" << endl;
    }
    return 0;
}

