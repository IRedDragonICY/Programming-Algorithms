#include <iostream>
using namespace std;


class years{
    public:
        void input();
        void output();
    private:
        bool isLeap();
        int y;
};years year;


void years::input(){
    cout<<"Masukkan tahun (>1752): ";
    cin>>y;
    if (y<0){
        cout<<"Tahun tidak boleh negatif"<<endl;
        system("pause");system("cls");input();
    }
    if (y<=1752){
        cout<<"tidak ada tahun kabisat sebelum tahun 1752 karena kalender gregorian"<<endl;
        system("pause");system("cls");input();
    }
}

bool years::isLeap(){
    if ((y%4==0 && y%100!=0) || y%400==0)
        return true;
    else
        return false;
    return 0;
}

void years::output(){
    cout<<"Tahun "<<y;
    if (isLeap())
        cout<<" adalah tahun kabisat";
    else
        cout<<" bukan tahun kabisat";
}

void leapYear(){
    year.input();
    year.output();
}

void isProgramRestart();

int main(){
    leapYear();
    isProgramRestart();
    return 0;
}

void isProgramRestart(){
    char restart=' ';
    cout<<endl<<endl<<"Apakah anda ingin mengulang program? (y/n): ";
    cin>>restart;
    switch (restart){
        case 'y':
            system("cls");
            main();
            break;
        case 'n':
            cout<<"Terima kasih telah menggunakan program ini"<<endl;
            break;
        default:
            cout<<"Input tidak valid"<<endl;
            system("pause");system("cls");
            isProgramRestart();
            break;
    }
}