/* Andi mendapatkan yang saku dengan jumlah yang sama dengan setiap bulannya.
Ia gunakan uang saku itu untuk membeli beberapa keperluan kuliah uang jajannya
akan tetapi ia juga ingin menabung dari sisa uang saku yang ia miliki. 
Walaupun tidak tentu setiap bulannya, andi meminta kawannya untuk membuat aplikasi untuk menghitung semua dengan menampilkan.
(OUTPUT : PENGELUARAN TIAP BULAM, TOTAL PENGELUARAN, DAN UANG TABUNGANNYA SAAT INI)
dengan implementasi rekursif 
penggunaan array*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void inputPengeluaranBulanan(int uangHabis[], int bulan){
    if (bulan == 0){
        return;
    } else {
        inputPengeluaranBulanan(uangHabis, bulan - 1);
        cout << "Pengeluaran bulan ke-" << bulan << ": "; 
        cin >> uangHabis[bulan-1];
    }
}

int hitungTotalPengeluaran(int uangHabis[], int bulan){
    if (bulan == 0){
        return 0;
    } else {
        return uangHabis[bulan-1] + hitungTotalPengeluaran(uangHabis, bulan - 1);
    }
}

int hitungTabungan(int uangSaku, int uangHabis[], int bulan){
    if (bulan == 0){
        return 0;
    } else {
        return uangSaku - uangHabis[bulan-1] + hitungTabungan(uangSaku, uangHabis, bulan - 1);
    }
}

// fungsi untuk output file
void outputToFile(int uangSaku, int uangHabis[], int totalBulan, int totalPengeluaran, int totalTabungan){
    ofstream file;
    file.open("BukUTabungan.txt", ios::app);

    file << "+-------+------------+-------------+------------------+" << endl;
    file << "| bulan | Pemasukkan | Pengeluaran | Sisa Pengeluaran |" << endl;
    for (int i = 0; i < totalBulan; i++){
        file << "+-------+------------+-------------+------------------+" << endl;
        file << "| " << setw(3) << i+1 << setw(5) << " | " << setw(9) << uangSaku << setw(4) << " | " << setw(9) << uangHabis[i] << setw(5) << " | " << setw(9) << uangSaku - uangHabis[i] << setw(9) << " |" << endl;
    }
    file << "+-------+------------+-------------+------------------+" << endl;
    file.close();
}
int main(){
    int uangSaku;
    int totalBulan;
    
    cout << "Masukkan total bulan: ";
    cin >> totalBulan;
    cout << "Masukkan uang saku tiap bulannya: "; 
    cin >> uangSaku;
    
    int uangHabis[totalBulan];
    cout << "Masukkan pengeluaran tiap bulan: " << endl;
    inputPengeluaranBulanan(uangHabis, totalBulan);
    
    int totalPengeluaran = hitungTotalPengeluaran(uangHabis, totalBulan);
    int totalTabungan = hitungTabungan(uangSaku, uangHabis, totalBulan);
    cout << "+-------+------------+-------------+------------------+-----------------+" << endl;
    cout << "| bulan | Pemasukkan | Pengeluaran | Sisa Pengeluaran | Jumlah Tabungan |" << endl;
    for (int i = 0; i < totalBulan; i++){
        cout << "+-------+------------+-------------+------------------+-----------------+" << endl;
        cout << "| " << setw(5) << i+1 << " | Rp." << setw(6) << uangSaku << " | Rp. " << setw(7) << uangHabis[i] << " | Rp. " << setw(12) << uangSaku - uangHabis[i] << " | Rp. " << setw(11) << hitungTabungan(uangSaku, uangHabis, i+1) << " |" << endl;
    }
    cout << "+-------+------------+-------------+------------------+-----------------+" << endl;

    
    cout << "Total pengeluaran selama " << totalBulan << " bulan adalah " << totalPengeluaran << endl;
    cout << "Tabungan saat ini adalah " << totalTabungan << endl;
    if (totalTabungan < 0)
        cout << "PESAN: Jangan lupa bayar utang" << endl;
    outputToFile(uangSaku, uangHabis, totalBulan, totalPengeluaran, totalTabungan);
    
    return 0;
}
