#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* berikut;
};

int main() {
    // Langkah satu
    Node* baru = new Node;
    baru->data = 5;
    baru->berikut = nullptr;
    cout << "Isi data node baru adalah: " << baru->data << endl;

    // Langkah dua
    Node* lain = new Node;
    lain->data = 6;
    lain->berikut = nullptr;
    cout << "Isi data node lain adalah: " << lain->data << endl;

    // Langkah tiga: menyambung rantai
    baru->berikut = lain;
    cout << "Isi data node lain dicetak dari node baru adalah: ";
    cout << baru->berikut->data << endl;

    // Langkah empat
    Node* kepala = baru;
    cout << "Mencetak node pertama dari pointer kepala: ";
    cout << kepala->data << endl;
    cout << "Mencetak node kedua dari pointer kepala: ";
    cout << kepala->berikut->data << endl;

    // Langkah lima: pointer yang jalan-jalan
    cout << "Menggunakan perulangan untuk mencetak setiap data pada rantai\n";
    Node* jalan = kepala;
    int i = 1;
    while (jalan != nullptr) {
        cout << "Data ke-" << i << " > " << jalan->data << endl;
        i++;
        jalan = jalan->berikut;
    }

    // Langkah enam: bukti bahwa pointer kepala tidak kehilangan data
    cout << "Mencetak node pertama dari pointer kepala: ";
    cout << kepala->data << endl;
    cout << "Mencetak node kedua dari pointer kepala: ";
    cout << kepala->berikut->data << endl;

    return 0;
}
