#include <iostream>
#include <unistd.h>
#include <iomanip>
using namespace std;

struct Employee{
    int id;
    string name;
    string position;
    string phone;
};

void inputEmployee(Employee emp[], int totalEmp);
void sortEmployee_Ascending(Employee emp[], int totalEmp);
void sortEmployee_Descending(Employee emp[], int totalEmp);
void searchID(Employee emp[], int totalEmp);
void showData(Employee emp[], int totalEmp);
void menu(Employee emp[], int totalEmp);


int main(){
    Employee emp[100];
    int totalEmp;
    cout<<"Masukkan jumlah karyawan: ";cin>>totalEmp;
    cin.ignore();
    inputEmployee(emp, totalEmp);
    menu(emp, totalEmp);
}

void inputEmployee(Employee emp[], int totalEmp){
    for(int i=0; i<totalEmp; i++){
        cout<<"===================="<<endl;
        cout<<"Karyawan ke-"<<i+1<<endl;
        cout<<"===================="<<endl;
        cout<<"ID: ";cin>>emp[i].id;
        cin.ignore();
        cout<<"Nama: ";getline(cin, emp[i].name);
        cout<<"Jabatan: ";getline(cin, emp[i].position);
        cout<<"No. HP: ";getline(cin, emp[i].phone);
    }
}

void sortEmployee_Ascending(Employee emp[], int totalEmp){
    for(int i=0; i<totalEmp; i++){
        for(int j=0; j<totalEmp-1; j++){
            if(emp[j].id>emp[j+1].id){
                swap(emp[j], emp[j+1]);
            }
        }
    }
}
void sortEmployee_Descending(Employee emp[], int totalEmp){
    for(int i=0; i<totalEmp; i++){
        for(int j=0; j<totalEmp-1; j++){
            if(emp[j].id<emp[j+1].id){
                swap(emp[j], emp[j+1]);
            }
        }
    }
}

void searchID(Employee emp[], int totalEmp){
    int id;
    cout<<"Masukkan ID: ";
    cin>>id;
    for(int i=0; i<totalEmp; i++){
        if(emp[i].id==id){
            cout<<"===================="<<endl;
            cout<<"Karyawan ke-"<<i+1<<endl;
            cout<<"===================="<<endl;
            cout<<"ID: "<<emp[i].id<<endl;
            cout<<"Nama: "<<emp[i].name<<endl;
            cout<<"Jabatan: "<<emp[i].position<<endl;
            cout<<"No. HP: "<<emp[i].phone<<endl;
            return;
        }
    }
    cout<<"ID tidak ditemukan"<<endl;
}
void showData(Employee emp[], int totalEmp){

    cout << "============================================================================================" << endl; 
    cout << left << "| " << setw(3) << "ID" << "| " << setw(40) << "NAMA" << "| " << setw(20) << "JABATAN" << "| " << setw(20) << "NO.TELP" << "|" << endl;
    for(int i=0; i<totalEmp; i++){
        cout << "============================================================================================" << endl;
        cout << left << "| " << setw(3) <<   emp[i].id << "| " << setw(40) << emp[i].name   << "| " << setw(20) << emp[i].position  << "| " <<setw(20) << emp[i].phone << "|" << endl;
    }
    cout << "============================================================================================" << endl; 
    int random;
    cin>>random;
}

void menu(Employee emp[], int totalEmp){
    int choice;
    cout<<"============================="<<endl;
    cout<<"Menu"<<endl;
    cout<<"1. Lihat data" <<endl;
    cout<<"2. Urutkan data (Ascending)"<<endl;
    cout<<"3. Urutkan data (Descending)"<<endl;
    cout<<"4. Search ID" <<endl;
    cout<<"5. Keluar" <<endl;
    cout<<"============================="<<endl;
    cout<<"Pilihan: ";
    cin>>choice;
    if (choice<1 || choice>5){
        cout<<"Pilihan tidak tersedia"<<endl;
        sleep(2);
        menu(emp, totalEmp);
    }
    switch(choice){
        case 1:
            showData(emp, totalEmp);
            break;
        case 2:
            sortEmployee_Ascending(emp, totalEmp);
            cout<<"Data berhasil diurutkan secara ascending"<<endl;
            break;
        case 3:
            sortEmployee_Descending(emp, totalEmp);
            cout<<"Data berhasil diurutkan secara descending"<<endl;
            break;
        case 4:
            searchID(emp, totalEmp);
            break;
        case 5:
            cout << "Terima kasih telah menggunakan program ini\n";
            return;
            break;
        default:
            cout<<"Pilihan tidak tersedia"<<endl;
            break;
    }
    sleep(2);
    system("clear");
    menu(emp, totalEmp);
}