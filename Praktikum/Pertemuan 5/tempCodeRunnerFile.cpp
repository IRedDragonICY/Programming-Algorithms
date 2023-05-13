#include <iostream>
using namespace std;

double series(int n){
    if(n==1){
        return 1;
    }else{
        if(n%2==0){
            return -1.0/n + series(n-1);
        }else{
            return 1.0/n + series(n-1);
        }
    }
}

void printFormula(int n){
    if(n==1){
        cout<<"1";
    }else{
        printFormula(n-1);
        if(n%2==0){
            cout<<" - 1/"<<n;
        }else{
            cout<<" + 1/"<<n;
        }
    }
}

int main(){
    int number;
    cout<<"Masukkan nilai n: "; cin>>number;
    cout<<"F("<<number<<") = "; printFormula(number);
    cout<<"\nHasil: "<<series(number)<<endl;
}