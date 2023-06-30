#include <iostream>
using namespace std;

void delString(int startIndex, int lastIndex, string nama){
    string deletedString = "";
    for (int kar = startIndex; kar <= lastIndex; kar++){
        deletedString = deletedString + nama[kar];
    }
    cout << deletedString << endl;

}

int main(){
    string names = "Ardiansyah";
    int startIndex = 6;
    int lastIndex = 9;
    delString(startIndex, lastIndex, names);
}