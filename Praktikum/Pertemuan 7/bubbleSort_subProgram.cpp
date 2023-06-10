#include <iostream>
using namespace std;

void printArray(int numberSeries[], int size){
    for(int i=0; i<size; i++) cout<<numberSeries[i]<<" ";
}

void bubbleSort(int numberSeries[], int size){
    int pass=1;
    for(int i=0; i<size; i++){
        for(int j=0; j<size-1; j++){
            cout<<"\nPass: "<<pass<<endl;
            if(numberSeries[j]>numberSeries[j+1]){
                for(int k=0; k<size; k++)
                    if(k==j || k==j+1) cout<<"\033[1;31m"<<numberSeries[k]<<"\033[0m"<<" ";
                    else cout<<numberSeries[k]<<" ";
                cout<<"     Swapped: "<<numberSeries[j]<<" and "<<numberSeries[j+1]<<endl;
                swap(numberSeries[j], numberSeries[j+1]);
                for(int k=0; k<size; k++)
                    if(k==j || k==j+1) cout<<"\033[1;32m"<<numberSeries[k]<<"\033[0m"<<" ";
                    else cout<<numberSeries[k]<<" ";
                cout<<"     After swapped"<<endl;
            }
            else{
                for(int k=0; k<size; k++)
                    if(k==j || k==j+1) cout<<"\033[1;32m"<<numberSeries[k]<<"\033[0m"<<" ";
                    else cout<<numberSeries[k]<<" ";
                cout<<"     No swapped: "<<numberSeries[j]<<" and "<<numberSeries[j+1]<<endl;
            }
            pass++;
        }
    }
}

int main(){
    int numberSeries[]={9,2,1,4,11,10,18,6};
    int size=sizeof(numberSeries)/sizeof(numberSeries[0]);
    cout<<"Unsorted Series: "<<endl;
    printArray(numberSeries, size);
    bubbleSort(numberSeries, size);
    cout<<"\nSorted Series: "<<endl;
    for(int i=0; i<size; i++){
        cout << numberSeries[i] << " ";
    }
}