#include <iostream>
using namespace std;
// mencetak bilangan yang habis dibagi 5 dan 7 antara 1 sampai dengan 100
class number{
public:
    void cetak(){
        for(int i=1; i<=100; i++){
            if(i%5==0 && i%7==0){
                cout << i << endl;
            }
        }
    }
};
int main(){
    number bil;
    bil.cetak();
    return 0;
}