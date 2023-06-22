/*
Buat lah flowchart untuk mengurutkan data matrixay 2 dimensi berukuran 3x3 dengan menggunakan
algoritma bubble sort.
*/
#include<bits/stdc++.h>
#define MAX 3
using namespace std;

void inputMatrix (int matrix[MAX][MAX]) {
    for (int i = 0; i < MAX; i++){ 
        for (int j = 0; j < MAX; j++){
            cout << "Masukkan nilai matriks [" << i << "][" << j << "] : ";
            cin >> matrix[i][j];
        }
    }
}


void printArr2D (int matrix[MAX][MAX]) {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

void convertMatrixTo1D (int matrix[MAX][MAX], int matrix1DTemp[MAX * MAX]) {
    int k = 0;
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            matrix1DTemp[k++] = matrix[i][j];
}

void convert1DToMatrix (int matrix[MAX][MAX], int matrix1DTemp[MAX * MAX]) {
    int k = 0;
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            matrix[i][j] = matrix1DTemp[k++];
}

void bubbleSort (int matrix[MAX][MAX], bool ascending) {
    int matrix1DTemp[MAX * MAX];
    convertMatrixTo1D(matrix, matrix1DTemp);
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
    convert1DToMatrix(matrix, matrix1DTemp);
}


int main () {
    int matrix[MAX][MAX];
    inputMatrix(matrix);
    cout<<"Matriks sebelum diurutkan : "<<endl;
    printArr2D(matrix);
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
    cout<<"Matriks setelah diurutkan : "<<endl;
    bubbleSort(matrix, ascending);
    printArr2D(matrix);
    return 0;
}