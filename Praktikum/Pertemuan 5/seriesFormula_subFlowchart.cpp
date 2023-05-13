#include <iostream>
using namespace std;

int main(){
    int n;
    double result = 0.0;
    bool isNegative = false;
  
    cout << "Masukkan nilai n: ";
    cin >> n;
    cout << "F(" << n << ") = ";
    int i=1;

    series: // subflowchart series
    while (i<=n){
        if(isNegative){
            cout<<" - 1/"<<i;
            result -= 1.0/i;
            isNegative = false;
        }else{
            if(i==1){
                cout<<1;
                result += 1;
            }else{
                cout<<" + 1/"<<i;
                result += 1.0/i;
            }
            isNegative = true;
        }
        i++;
        goto series;
    }
    
    cout << "\nHasil: " << result << endl;
}