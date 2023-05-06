#include <iostream>
#include <fstream>
using namespace std;

const int maxTotalFuels = 2;

struct billingUser{
    string username;
    float money;
    int fuelOption;
    float liter;
    float totalPrice;
    float change;
};

struct fuel{
    string name;
    float price;
    float liter;
};

void inputFuel(billingUser &user, fuel fuels[]){
    cout << "===============================================" << endl;
    cout << "================SELAMAT DATANG=================" << endl;
    cout << "===============================================" << endl;
    
    cout<<"Masukkan Nama Pelanggan: ";
    getline(cin, user.username);
    
    cout<<"Masukkan Jumlah Uang: ";
    cin >> user.money;

    while(true){
        cout << "          Silahkan pilih jenis bahan bakar " << endl << endl;
        cout << "+============================+"<<endl;
        cout << "|1. Pertalite                |"<<endl;
        cout << "|2. Pertamax                 |"<<endl;
        cout << "+============================+"<<endl;
        cout << "Pilih Jenis Bahan Bakar: ";
        cin >> user.fuelOption;
        if (user.fuelOption > maxTotalFuels || user.fuelOption < 1){
            cout << "Maaf, pilihan anda tidak tersedia" << endl;
        } else {
            user.fuelOption--;
            break;
        }
    }

    cout << "Masukkan Jumlah Liter: ";
    cin >> user.liter;
}

int calculateFuelPrice(billingUser &user, fuel fuels[]){
    user.totalPrice = user.liter * fuels[user.fuelOption].price;
    return user.totalPrice;
}

int calculateChange(billingUser &user, fuel fuels[]){
    user.change = user.money - user.totalPrice;
    return user.change;
}

void printInvoice(billingUser &user, fuel fuels[]){
    cout << endl;
    cout << "   PERTAMINA" << endl;
    cout << "   SBPU 54.612.64" << endl;
    cout << "   Jl.Raya Buduran No.117" << endl;
    cout << "   Bantul, Yogyakarta" << endl;
    cout << "   Telp. +6282155545035" <<endl;
    cout << " =====================================" << endl;
    cout << "   Nama Pelanggan : " << user.username << endl;
    cout << "   Jenis BBM      : " << fuels[user.fuelOption].name << endl;
    cout << "   Harga/Liter    : " << fuels[user.fuelOption].price << endl;
    cout << "   Total Liter    : " << user.liter << " L " << endl;
    cout << "   Total Harga    : " << user.totalPrice << endl;
    cout << " =====================================" << endl;
    cout << "   Tunai          : " << user.money << endl;
    cout << "   Kembali        : " << user.change<< endl;
    cout << "   Terima kasih dan Selamat Jalan." << endl;
}

void checkMoney(billingUser &user){
    while (user.money < user.totalPrice){
        cout << "Maaf, uang anda tidak cukup" << endl;
        cout << "Total Harga: " << user.totalPrice << endl;
        cout << "Silahkan masukkan uang anda kembali" << endl;
        cout << "Masukkan Uang Anda: ";
        cin >> user.money;
    }
}

int main(){
    billingUser user;
    fuel fuels[maxTotalFuels];

    fuels[0].name="Pertalite";
    fuels[0].price=7000;
    fuels[0].liter=500;

    fuels[1].name="Pertamax";
    fuels[1].price=9000;
    fuels[1].liter=500;

    inputFuel(user, fuels);

    calculateFuelPrice(user, fuels);
    checkMoney(user);
    calculateChange(user, fuels);

    printInvoice(user, fuels);
    return 0;
}
