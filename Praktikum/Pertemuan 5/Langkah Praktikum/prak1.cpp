#include <iostream>
using namespace std;
class perulangan{
    public:
        void ulang_for(int n);
        void ulang_rekursif(int n);
};

void perulangan::ulang_for(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}

void perulangan::ulang_rekursif(int n){
    if(n>=1){
        ulang_rekursif(n-1);
        cout<<n<<" ";

    }
}

int main(){
    perulangan p;
    p.ulang_for(10);
    cout<<endl;
    p.ulang_rekursif(10);
    return 0;
}