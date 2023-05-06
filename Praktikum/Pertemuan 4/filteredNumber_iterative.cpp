#include <iostream>

using namespace std;

int main() {
    int min_iteration, index_filtered_number, max_iteration, index_iteration, total_filtered_number;
    const int array_size = 100;
    int filtered_number[array_size];

    filtered_number[0] = 0;
    total_filtered_number = 0;
    index_filtered_number = 1;
    min_iteration = 1;
    max_iteration = 100;
    index_iteration = min_iteration;

    while (true) {
        if (index_iteration % 5 == 0 && index_iteration % 7 == 0) {
            filtered_number[index_filtered_number - 1] = index_iteration;
            index_filtered_number++;
            total_filtered_number++;
        }

        if (index_iteration == max_iteration) {
            break;
        }

        index_iteration++;
    }

    cout << "Bilangan yang habis dibagi 5 dan 7 antara 1 sampai dengan 100" << endl;
    cout << "f(x) = {x | 1 <= x <= 100, x habis dibagi oleh 5 dan 7}" << endl;
    cout << "f(x) = {";

    index_iteration = min_iteration;
    max_iteration = total_filtered_number;
    index_filtered_number = 1;

    while (true) {
        cout << filtered_number[index_filtered_number - 1];
        index_iteration++;

        if (!(index_iteration <= max_iteration)) {
            break;
        }

        cout << ",";
        index_filtered_number++;
    }

    cout << "}" << endl;
    return 0;
}