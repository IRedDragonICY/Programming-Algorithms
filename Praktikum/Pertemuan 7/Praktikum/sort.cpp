#include <iostream>
using namespace std;

// selection sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) min = j;
        }
        swap(arr[i], arr[min]);
    }
}

// insertion sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i - 1;
        int key = arr[i];
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; 
            j--;
        }
        arr[j + 1] = key;
    }
}
// print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}
void searchNum(int arr[], int n, int search){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==search){
            cout<<"ada, posisi di: "<<i+1<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Data tidak ditemukan"<<endl;
    }
}

void inputArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<"Data["<<i<<"] : ";cin>>arr[i];
    }
}

int main(){
    int sizeArr;
    int search;
    cout<<"Masukkan jumlah data : ";
    cin>>sizeArr;
    int arr[sizeArr];
    inputArr(arr, sizeArr);
    cout<<"Data sebelum sorting : "<<endl;
    printArray(arr, sizeArr);
    cout<<endl;
    cout<<"Data setelah sorting : (selection sort) "<<endl;
    selectionSort(arr, sizeArr);
    printArray(arr, sizeArr);

    cout<<endl;
    cout<<"Data setelah sorting : (insertion sort) "<<endl;
    insertionSort(arr, sizeArr);
    printArray(arr, sizeArr);
    
    cout<<endl<<endl;
    cout<<"cari data :";cin>>search;
    searchNum(arr, sizeArr, search);
}