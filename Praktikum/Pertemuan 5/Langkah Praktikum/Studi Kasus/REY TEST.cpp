#include <iostream>
using namespace std;



// rumus fibonacci
// 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610

class Fibonacci {
    private:
        int n; 
    public:
        int fibonaciIteratif(int n);
        int fibonacciRekursif(int n);
};

//fungsi iteratif untuk menghitung bilangan fibonacci
int Fibonacci::fibonaciIteratif(int n){
    // dimulai perhitungan dari 1+1+2+3+5+8+13+21+34+55+89+144+233+377+610
    int result = 0;
    int fib[3] = {0, 1, 0};
    for (int i = 0; i < n; i++) {
        fib[2] = fib[0] + fib[1];
        fib[0] = fib[1];
        fib[1] = fib[2];
        result += fib[2];
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

//fungsi utama
int main(){
    
    Fibonacci fibo;
    cout<<fibo.fibonacciRekursif(2);
    cout<<endl;
    cout<<fibo.fibonaciIteratif(2);


    return 0;
       
}