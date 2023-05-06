#include <iostream>
#include <windows.h>
#include <string.h>
#include <cmath>
using namespace std;
// menampilkan pangkat dengan x sebagai bilangan real dan y sebagai bilangan bulat

int main(){
    double x,y,result;
    cout<<"Masukkan nilai x (BIlangan real) : ";cin>>x;
    do{
        cout<<"Masukkan nilai y (Bilangan bulat) : ";cin>>y;
        if (y-floor(y)!=0){
            cout<<"Error 1: Tidak memasukkan bilangan bulat"<<endl;y=0;
        }
    }
    while (y==0);  

    result=pow(x,y);
    // mengecek apakah negatif atau positif pada bilangan y
    // jika negatif akan ditambahkan superscript -
    cout<<x;
    if (y<0){
        SetConsoleOutputCP(65001);cout<<"⁻";
    }
    int totalDigity=0;
    int digit=y;
    if (y<0){
        digit*=-1;
    }
    float divisor=1;
    while (digit/divisor>=1){
        totalDigity++;
        divisor*=10;
    }
    int splitnumber[totalDigity];
    //mengubah tipe data y menjadi int
        
    for (int i=0;i<totalDigity;i++){
        splitnumber[i]=digit%10;
        digit/=10;
    }

    // mengubah split number menjadi superscript
    while (totalDigity>0){
        switch (splitnumber[totalDigity-1]){
            case 0: SetConsoleOutputCP(65001);cout<<"⁰";break;
            case 1: SetConsoleOutputCP(65001);cout<<"¹";break;
            case 2: SetConsoleOutputCP(65001);cout<<"²";break;
            case 3: SetConsoleOutputCP(65001);cout<<"³";break;
            case 4: SetConsoleOutputCP(65001);cout<<"⁴";break;
            case 5: SetConsoleOutputCP(65001);cout<<"⁵";break;
            case 6: SetConsoleOutputCP(65001);cout<<"⁶";break;
            case 7: SetConsoleOutputCP(65001);cout<<"⁷";break;
            case 8: SetConsoleOutputCP(65001);cout<<"⁸";break;
            case 9: SetConsoleOutputCP(65001);cout<<"⁹";break;
        }
        totalDigity--;
    }
    cout<<" = "<<result<<endl;
}