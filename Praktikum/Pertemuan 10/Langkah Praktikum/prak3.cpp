#include <iostream>
using namespace std;

int main(){
    string str1 = "hai";
    string str2 = "Hai";
    bool result = str1 == str2;
    cout << result<<endl;
    str2 = "hai";
    result = str1 == str2;
    cout << result;
}