#include <iostream>
using namespace std;

// Fungsi rekursif untuk mencetak bilangan yang habis dibagi 5 dan 7 antara minIteration sampai maxIteration
void recursivePrintFilteredNumber(int currentNumber, int maxIteration) {
    if (currentNumber <= maxIteration) {
        if (currentNumber % 5 == 0 && currentNumber % 7 == 0) {
            cout << currentNumber;

            // Mengecek apakah ada bilangan habis dibagi 5 dan 7 setelah currentNumber
            bool isLast = true;
            for (int i = currentNumber + 1; i <= maxIteration; i++) {
                if (i % 5 == 0 && i % 7 == 0) {
                    isLast = false;
                    break;
                }
            }

            if (!isLast) {
                cout << ", ";
            }
        }
        recursivePrintFilteredNumber(currentNumber + 1, maxIteration);
    }
}

int main() {
    int minIteration = 1;
    int maxIteration = 100;

    cout << "Bilangan yang habis dibagi 5 dan 7 antara 1 sampai dengan 100" << endl;
    cout << "f(x) = {x | 1 <= x <= 100, x habis dibagi oleh 5 dan 7}" << endl;
    cout << "f(x) = {";
    recursivePrintFilteredNumber(minIteration, maxIteration);
    cout << "}" << endl;
}