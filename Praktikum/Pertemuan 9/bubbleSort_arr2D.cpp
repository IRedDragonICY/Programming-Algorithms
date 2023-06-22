/*
Buat lah flowchart untuk mengurutkan data matrixay 2 dimensi berukuran 3x3 dengan menggunakan
algoritma bubble sort.
*/
#include<bits/stdc++.h>
#define MAX 3
using namespace std;

int main () {
    int matrix[MAX][MAX];
    for (int i = 0; i < MAX; i++){ 
        for (int j = 0; j < MAX; j++){
            cout << "Masukkan nilai matriks [" << i << "][" << j << "] : ";
            cin >> matrix[i][j];
        }
    }

    cout<<"Matriks sebelum diurutkan : "<<endl;
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    bool ascending;
    while (true){
        cout << "Mau diurutkan secara ascending? (1 = ya, 0 = tidak): ";
        cin >> ascending;
        if (cin.fail() || (ascending != 1 && ascending != 0)) {
            cout << "Input salah!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    int matrix1DTemp[MAX * MAX];
    int k = 0;
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            matrix1DTemp[k++] = matrix[i][j];

    for (int i = 0; i < MAX * MAX; i++) {
        for (int j = 0; j < MAX * MAX - i - 1; j++) {
            if (ascending) {
                if (matrix1DTemp[j] > matrix1DTemp[j + 1]) {
                    swap(matrix1DTemp[j], matrix1DTemp[j + 1]);
                }
            } else {
                if (matrix1DTemp[j] < matrix1DTemp[j + 1]) {
                    swap(matrix1DTemp[j], matrix1DTemp[j + 1]);
                }
            }
        }
    }

    k = 0;
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            matrix[i][j] = matrix1DTemp[k++];

    cout<<"Matriks setelah diurutkan : "<<endl;
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

    return 0;
}