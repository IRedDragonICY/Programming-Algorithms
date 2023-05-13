#include <iostream>
using namespace std;
// mencetak bilangan fact

int fact_iterative(int n){
    int fak=1;
    for (int i=1;i<=n;i++)
        fak*=i;
    return fak;
}

int fact_recursive(int n){
    if ((n==0) || (n==1))
        return 1;
    else
        return n*fact_recursive(n-1);
}

void print_fact(int n){
    cout<<n<<"!= ";
    for (int i=n;i>=1;i--){
        cout<<i;
        if (i!=1)
            cout<<" x ";
    }
    cout<<" = ";
}

int main(){
    int n=10;
    print_fact(n);
    cout<<fact_iterative(n)<<endl;
    print_fact(n);
    cout<<fact_recursive(n)<<endl;
}