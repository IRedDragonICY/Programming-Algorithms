#include <iostream>

using namespace std;

const int array_size = 100;

void initializeVariable(int &min_iteration, int &max_iteration, int &index_iteration) {
    min_iteration = 1;
    max_iteration = 100;
    index_iteration = min_iteration;
}

void filteringNumber(int &index_filtered_number, int filtered_number[], int min_iteration, int max_iteration) {
    for (int index_iteration = min_iteration; index_iteration <= max_iteration; index_iteration++) {
        if (index_iteration % 5 == 0 && index_iteration % 7 == 0) {
            filtered_number[index_filtered_number - 1] = index_iteration;
            index_filtered_number++;
        }
    }
}

void printFilteredNumber(int filtered_number[], int total_filtered_number) {
    cout << "Bilangan yang habis dibagi 5 dan 7 antara 1 sampai dengan 100" << endl;
    cout << "f(x) = {x | 1 <= x <= 100, x habis dibagi oleh 5 dan 7}" << endl;
    cout << "f(x) = {";

    for (int i = 0; i < total_filtered_number; i++) {
        cout << filtered_number[i];

        if (i != total_filtered_number - 1) {
            cout << ",";
        }
    }

    cout << "}" << endl;
}

int main() {
    int min_iteration, max_iteration, index_iteration, index_filtered_number;
    int filtered_number[array_size];

    initializeVariable(min_iteration, max_iteration, index_iteration);

    index_filtered_number = 1;
    filteringNumber(index_filtered_number, filtered_number, min_iteration, max_iteration);

    int total_filtered_number = index_filtered_number - 1;
    printFilteredNumber(filtered_number, total_filtered_number);

    return 0;
}
