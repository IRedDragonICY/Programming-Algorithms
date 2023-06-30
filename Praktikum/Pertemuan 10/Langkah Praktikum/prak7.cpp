#include <iostream>
using namespace std;

int getStringLength(string strings){
    int length = 0;
    while (strings[length] != '\0'){
        length = length + 1;
    }
    return length;
}

void delString(int startIndex, int lastIndex, string nama){
    
}

void findSubstring(string nama, string keyword){
    int slices[5];
    bool found = false;
    string lastSlice = "";
    int strLength = getStringLength(nama);
    int keywordLength = getStringLength(keyword);
    
    for (int i = 0; i < strLength; i++){
        lastSlice = lastSlice + nama[i];
        cout << lastSlice << endl;
    }
}

int main(){
    string name = "Ardiansyah";
    string keyword = "dian";
    findSubstring(name, keyword);
}