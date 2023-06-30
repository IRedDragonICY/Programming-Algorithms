#include <iostream>
using namespace std;

int main(){
    string nama = "Ardiansyah";
    int length = 0;
    while (nama[length] != '\0'){
        length = length + 1;
    }
    cout << "panjang string " << nama << " = " << length << endl; 
}