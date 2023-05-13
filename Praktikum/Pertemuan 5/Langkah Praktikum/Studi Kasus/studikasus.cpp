
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;



// rumus fibonacci
// 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610

class Fibonacci {
    private:
        int n; 
    public:
        int fibonacciIteratif(int n);
        int fibonacciRekursif(int n);
        void showFibonacci(int n);
        void fibonacciFormula(int n);
};

//fungsi iteratif untuk menghitung bilangan fibonacci
int Fibonacci::fibonacciIteratif(int n){
    int fib[3] = {0, 1, 0};
    int result = 0;
    for (int i = 0; i < n; i++) {
        fib[2] = fib[0] + fib[1];
        fib[0] = fib[1];
        fib[1] = fib[2];
        result = fib[2];
    }
    return result;
}

//fungsi rekursif untuk menghitung bilangan fibonacci
int Fibonacci::fibonacciRekursif(int n) {
    int result = 1;
    if (n == 0 || n == 1) {
        return result;
    } else {
        result = fibonacciRekursif(n-1) + fibonacciRekursif(n-2);
    }
    return result;
} 

void Fibonacci::showFibonacci(int n) {
    int fib[3] = {0, 1, 0};
    int pascalArr[n+1][n+1];
    // membuat segitiga pascal
    for(int i=0; i<n; i++){

        fib[2] = fib[0] + fib[1];
        fib[0] = fib[1];
        fib[1] = fib[2];

        for (int j = 0; j < n-i; j++) {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                pascalArr[i][j] = 1;
            else 
                pascalArr[i][j] = pascalArr[i-1][j-1] + pascalArr[i-1][j];
            cout << setw(3) << pascalArr[i][j] << " ";
        }
        cout << endl;
    }
}


void Fibonacci::fibonacciFormula(int n){
    int fib[3] = {0, 1, 0};
    // bilangan fibonacci tidak dimulai dari 0
    for (int i = 1; i <= n; i++) {
        cout << fib[0];
        if(i!=n) cout<<"+";
        fib[2] = fib[0] + fib[1];
        fib[0] = fib[1];
        fib[1] = fib[2];
    }
    cout<<endl;
}


int main(){
    Fibonacci fibo;

    int n;
    int choose;
    bool repeat = true;
    while (true){
        cout << "Masukkan batas bilangan fibonacci: ";
    do{
        cout << "+==========================+" << endl;
        cout << "| 1. Fungsi Rekursif       |" << endl;
        cout << "| 2. Fungsi Iteratif       |" << endl;
        cout << "| 3. Exit                  |" << endl;
        cout << "+==========================+" << endl;
        cout << "Masukkan Pilihan : ";
        cin >> choose;
        switch (choose){
            case 1:
                cout << "Segitiga Fibonacci : " << endl;
                fibo.showFibonacci(n);
                cout<<"Formula :" << endl;
                fibo.fibonacciFormula(n);
                cout << "Hasil fibonaci rekursif: " << fibo.fibonacciRekursif(n) << endl;
                system("pause");
                system("cls");
                break;
            case 2:
                cout << "Segitiga Fibonacci :" << endl;
                fibo.showFibonacci(n);
                cout<<"Formula :" << endl;
                fibo.fibonacciFormula(n);
                cout << "Hasil fibonaci iteratif: " << fibo.fibonacciIteratif(n) << endl;
                system("pause");
                system("cls");
                break;
            case 3:
                cout << "Terima kasih!" << endl;
                exit(0);
                break;
            default:
                cout << "Pilihan tidak tersedia!" << endl;
                break;
        }

    }while(repeat);
    return 0;
       
}