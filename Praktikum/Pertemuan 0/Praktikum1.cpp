//seorang pedagang membutuhkan aplikasi untuk menunjang perhitungan ketika berdagang. dikarenakan pendidikan dia terbatas, dia tidak bisa menghitung seacara cepat sehingga di kesulitan ketika dagangannya rame. Aplikasi apa yang kira-kira dia butuhkan?

    /*Spesifikasi: 
     - daftar dagangan
     - harga dagangan
     - Stock dagangan
     - input transaksi
     - struk belanja 
    


    Make by Group 1 alpro slot jumat 12.30
    ae :Nama : 
        - Muhammad Farid Herdianto (Ndik)   2200018401 
        - Reyhanssan Islamey       (Justin) 2200018411
        - Rendie Abd Saputra       (Ryu)    2200018094    
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <conio.h>
#include <iomanip>
#include <unistd.h>
using namespace std;

const int totalItem = 20;
const int maxCart   = 1000;
int itemIndex;

struct item{
    long long int price;
    string itemName;
    int stock;
    string itemCode;
};item items[totalItem];

struct cartInventory{
    bool isItemExist = false;
    string nameUser;
    int moneyUser;
    int cartIndex=0;
    struct item{
        string itemName;
        string itemCode;
        long long int price;
        int qty;
    };item items[maxCart];

};cartInventory cart;

void userLogin();
void titleScreen();
void inputDataItem();
void interfaceUser();
void addCartMenu();
void inputCartUser();
void editCart();
void showCart();
void pay();
void receiptProduct();
void addPistolItems();
void addWeaponsItems();
void addDataAccsessory();
void addHandItemCategory();
void pistolSubCategory();
void weaponsSubCategory();
void accessorySubCategory();
void handItemSubCategory();

int main()
{
    inputDataItem();
    userLogin();
    interfaceUser();
}

void inputDataItem(){
    addPistolItems();
    addWeaponsItems();
    addDataAccsessory();
    addHandItemCategory();
}

void titleScreen(){
    cout<<"\t\t  /$$      /$$                               /$$                             /$$    "<<endl;
    cout<<"\t\t | $$$    /$$$                              | $$                            | $$    "<<endl;
    cout<<"\t\t | $$$$  /$$$$  /$$$$$$   /$$$$$$   /$$$$$$$| $$$$$$$   /$$$$$$  /$$$$$$$  /$$$$$$  "<<endl;
    cout<<"\t\t | $$ $$/$$ $$ /$$__  $$ /$$__  $$ /$$_____/| $$__  $$ |____  $$| $$__  $$|_  $$_/  "<<endl;
    cout<<"\t\t | $$  $$$| $$| $$$$$$$$| $$  \\__/| $$      | $$  \\ $$  /$$$$$$$| $$  \\ $$  | $$    "<<endl;
    cout<<"\t\t | $$\\  $ | $$| $$_____/| $$      | $$      | $$  | $$ /$$__  $$| $$  | $$  | $$ /$$"<<endl;
    cout<<"\t\t | $$ \\/  | $$|  $$$$$$$| $$      |  $$$$$$$| $$  | $$|  $$$$$$$| $$  | $$  |  $$$$/"<<endl;
    cout<<"\t\t |__/     |__/ \\_______/|__/       \\_______/|__/  |__/ \\_______/|__/  |__/   \\___/  "<<endl<<endl;
}                                                                                

void userLogin(){
    const int NUM_MENU_ITEMS = 2;
    bool isUserSelectingMenu = true;
    int selectedMenuItem     = 0;
    titleScreen();
    cout<<"Masukkan Nama Anda : ";
	if (cart.nameUser != "")
		cin.ignore();
    getline(cin,cart.nameUser);
    cout<<"Masukkan Uang Anda : ";
    cin>>cart.moneyUser;
    cout<<"Apakah Anda sudah yakin dengan data yang Anda masukkan?: ";
    while (isUserSelectingMenu){
        system("cls");
        titleScreen();
        cout<<"Nama User: ";cout<<cart.nameUser<<endl;
        cout<<"Uang User: ";cout<<"USD "<<cart.moneyUser<<endl;
        cout << endl << endl;
        for (int indexMenu = 0; indexMenu < NUM_MENU_ITEMS; indexMenu++){
            if (indexMenu == selectedMenuItem)
                cout << "> ";
            else 
                cout << "  ";

            switch (indexMenu){
            case 0:
                cout << "Ya" << endl; break;
            case 1:
                cout << "Tidak" << endl; break;
            }
        }
        char input = getch();
        switch (input){
        case 72: // up arrow
            selectedMenuItem = (selectedMenuItem - 1 + NUM_MENU_ITEMS) % NUM_MENU_ITEMS;
            break;
        case 80: // down arrow
            selectedMenuItem = (selectedMenuItem + 1) % NUM_MENU_ITEMS;
            break;
        case 13: // enter
			isUserSelectingMenu = false;
            switch (selectedMenuItem){
				case 0:
					break;
				case 1:
					system("cls");userLogin();
					break;
            }
            break;
        }
    }
}

/*
    This function is used to interface the user. The user can select the menu item using the up and down arrow keys. If the user presses the enter key, the selected menu item will be executed.
*/
void interfaceUser(){
    const int NUM_MENU_ITEMS = 4;
    bool isUserSelectingMenu = true;
    int selectedMenuItem     = 0;

    while (isUserSelectingMenu){
        system("cls");
        cout<<"Name User:";cout<<cart.nameUser<<endl;
        showCart();
        cout << endl << endl;
        for (int indexMenu = 0; indexMenu < NUM_MENU_ITEMS; indexMenu++){
            if (indexMenu == selectedMenuItem)
                cout << "> ";
            else 
                cout << "  ";

            switch (indexMenu){
                case 0:
                    cout << "Pilih Barang" << endl;
                    break;
                case 1:
                    cout << "Edit Barang" << endl;
                    break;
                case 2:
                    cout << "Membayar" << endl;
                    break;
                case 3:
                    cout << "Keluar" << endl;
                    break;
            }
        }
        char input = getch();

        switch (input){
        case 72: // up arrow
            selectedMenuItem = (selectedMenuItem - 1 + NUM_MENU_ITEMS) % NUM_MENU_ITEMS;
            break;
        case 80: // down arrow
            selectedMenuItem = (selectedMenuItem + 1) % NUM_MENU_ITEMS;
            break;
        case 13: // enter
            isUserSelectingMenu = false;
            system("cls");
            switch (selectedMenuItem){
                case 0:
                    addCartMenu();
                    break;
                case 1:
                    editCart();
                    break;
                case 2:
                    pay();
                    break;
                case 3:
                    cout<<"Terima Kasih Telah Berbelanja Di Toko Kami"<<endl;
                    sleep(2);
                    exit(0);
                    break;
            }
            break;
        }
    }
}

void addCartMenu(){
    const int NUM_MENU_ITEMS = 5;
    bool isUserSelectingMenu = true;
    int selectedMenuItem     = 0;

    while (isUserSelectingMenu){
        system("cls");
        cout << "Kami punya tawaran menarik untukmu, Silahkan di pilih sesuai kebutuhanmu " << endl << endl;
        for (int indexMenu = 0; indexMenu < NUM_MENU_ITEMS; indexMenu++){
            if (indexMenu == 4)
                cout << endl;
            if (indexMenu == selectedMenuItem)
                cout << "> ";
            else 
                cout << "  ";

            switch (indexMenu){
                case 0:
                    cout << "Pistol" << endl;
                    break;
                case 1:
                    cout << "Laras Panjang" << endl;
                    break;
                case 2:
                    cout << "Aksesoris" << endl;
                    break;
                case 3:
                    cout << "Senjata Tangan" << endl;
                    break;
                case 4:
                    cout << "Kembali" << endl;
                    break;
                
        }
        }
        char input = getch();
        switch (input){
        case 72: // up arrow
            selectedMenuItem = (selectedMenuItem - 1 + NUM_MENU_ITEMS) % NUM_MENU_ITEMS;
            break;
        case 80: // down arrow
            selectedMenuItem = (selectedMenuItem + 1) % NUM_MENU_ITEMS;
            break;
        case 13: // enter
            system("cls");
            isUserSelectingMenu = false;
            switch (selectedMenuItem){
                case 0:
                    pistolSubCategory();
                    break;
                case 1:
                    weaponsSubCategory();
                    break;
                case 2:
                    accessorySubCategory();
                    break;
                case 3:
                    handItemSubCategory();
                    break;
                case 4:
                    interfaceUser();
                    break;
            }
            break;
        }
    }
}

// This function is used to display receipt product
void receiptProduct(double subTotal){
    double Change;
    double tax = 0.15; // 15 %
    double totalPrice = subTotal+(subTotal*tax);
    time_t t;
    time(&t);
    struct tm *ptm = localtime(&t);
    cout<< "=========================================================================================================================" << endl;
    cout<< "==================================================== Merchant ===========================================================" << endl;
    cout<< "====================================================   Toko   ===========================================================" << endl;
    cout<< "Nama Pembeli    : " << cart.nameUser << endl;
    cout<< "Tanggal         : " << ptm->tm_mday << "/" << ptm->tm_mon+1 << "/" << ptm->tm_year+1900 << endl;
    cout<<"-------------------------------------------------------------------------------------------------------------------------" << endl;
    cout<<setw(40)<<"Nama Barang" << setw(30) << "Qty" << setw(40)<<"Price" << setw(30) << "Total" << endl;
    cout<<"-------------------------------------------------------------------------------------------------------------------------" << endl;
    for (int itemIndex=0; itemIndex<cart.cartIndex; itemIndex++)
        cout<<setw(40)<<cart.items[itemIndex].itemName << setw(30) << cart.items[itemIndex].qty << setw(40)<<cart.items[itemIndex].price << setw(30) << cart.items[itemIndex].price * cart.items[itemIndex].qty << endl;
    cout<<"-------------------------------------------------------------------------------------------------------------------------" << endl;
    cout<<fixed<<setprecision(2);
    cout<<"Sub Total : USD "<<subTotal<<endl;
    cout<<"Tax       : "<<tax*100<<" %"<<endl<<endl;
    cout<<"Total     : USD "<<totalPrice<<endl;
    cout<<"Uang Anda : USD "<<cart.moneyUser<<endl;
    cout<<"_________________________________  _"<<endl;
    cout<<"Kembalian : USD "<<cart.moneyUser - totalPrice<<endl;
    system("pause");
}

// function to check if cart is empty
void isCartEmpty(){
    if (cart.isItemExist == false){
        cout<<"+========================================+"<<endl;
        cout<<"|Maaf keranjang belanja Anda masih kosong|"<<endl; 
        cout<<"+========================================+"<<endl;
        system("pause");
        return (interfaceUser());
    }
}

// function to check if item is exist in cart
void pay(){
    isCartEmpty();
    double subTotal = 0;
    for (int itemIndex=0; itemIndex<cart.cartIndex; itemIndex++)
        subTotal += cart.items[itemIndex].price * cart.items[itemIndex].qty;
    
    cout<<"Uang Anda  : "<<cart.moneyUser<<endl;
    receiptProduct(subTotal);
}

// function to check if item is exist in cart and show cart
void showCart(){
    cout<<"Keranjang Anda:"<<endl;
    if (cart.isItemExist == false){
        cout<<"+========================================+"<<endl;
        cout<<"|Maaf keranjang belanja Anda masih kosong|"<<endl; 
        cout<<"+========================================+"<<endl;
    }
    else{
        cout<<"======================================================================================"<<endl;
        cout<<"============================ Keranjang Belanja Anda =================================="<<endl;
        cout<<"======================================================================================"<<endl;
        cout<<"No        Nama Barang                             Harga                         Qty   "<<endl;
        cout<<"======================================================================================"<<endl;
        // print array value item
        // if empty array, array not be print into screen
        for (int itemIndex=0; itemIndex<cart.cartIndex; itemIndex++){
            cout << setw(10)<<left<<itemIndex+1<<setw(40)<<cart.items[itemIndex].itemName<<setw(30)<<cart.items[itemIndex].price<<setw(30)<<cart.items[itemIndex].qty<<endl;        }
        cout<<"======================================================================================"<<endl;
    }
    
}


//remove function for remove item in cart
void removeCart(){
    int itemIndex;
    int totalValueItem;
    cout << "Masukkan nomor barang dari keranjang yang ingin diubah: ";
    cin >> itemIndex;
    cout<< "Masukkan jumlah barang yang ingin dikurangi: ";
    cin >> totalValueItem;
    cart.items[itemIndex-1].qty -= totalValueItem;
    cout <<"Barang berhasil dikurangi" << endl;
    //code for back to menu edit cart with swithchase
    cout << "Kembali ke menu edit cart" << endl;
    system("cls");
}
//function for add item in cart
void addCart(){
    int indexItem;
    int totalValueItem;
    cout << "Masukkan nomor barang dari keranjang yang ingin diubah: ";
    cin >> indexItem;
    cout<< "Masukkan jumlah barang yang ingin ditambahkan: ";
    cin >> totalValueItem;
    cart.items[indexItem-1].qty += totalValueItem;
    cout << "Barang berhasil ditambahkan" << endl;
    cout << "Kembali ke menu edit cart" << endl;
    system("cls");
}

//this function for edit item in cart
void editCart(){
    int Choices;
    system("cls");
    isCartEmpty();
    showCart();
    cout << "Pilih salah satu opsi di bawah ini: " << endl;
    cout << "1. Tambah Barang" << endl;
    cout << "2. Kurangi Barang" << endl;
    cout << "3. Kembali" << endl;
    cout << "Pilihan: ";
    cin >> Choices;
    switch (Choices){
        case 1:
            addCart();
            break;
        case 2:
            removeCart();
            break;
        case 3:
            interfaceUser();
            break;
        default:
            cout << "Pilihan tidak ada, silahkan pilih lagi" << endl;
            break;
    }
    editCart();
}


//this 
void listItem(int minIndexItem,int maxIndexItem){
    cout << "==============================================================================================" << endl;
    cout << "No               Nama Barang                         Harga            Stock        Kode Barang" << endl;
    cout << "==============================================================================================" << endl;
    for (int itemIndex = minIndexItem; itemIndex < maxIndexItem; itemIndex++){
        cout<<setw(10)<<left<< itemIndex+1-minIndexItem <<" "<< setw(40) << left<< items[itemIndex].itemName << setw(20) << items[itemIndex].price << setw(20);
        // if stock item empty, then print "Kosong"
        if (items[itemIndex].stock > 0)
            cout << items[itemIndex].stock;
        else 
            cout << "Kosong";
        cout << setw(20) << items[itemIndex].itemCode << endl;
    }        
    cout << "==============================================================================================" << endl;
}


void inputCart(int choiceItem,int quantity, int minIndexItem){
    choiceItem+=minIndexItem;
    items[choiceItem-1].stock -= quantity;
    for (int i = 0; i < cart.cartIndex; i++){
        if (cart.items[i].itemCode == items[choiceItem-1].itemCode){
            cart.items[i].qty += quantity;
            cart.isItemExist = true;
            return;
        }
    }
    cart.items[cart.cartIndex].itemCode = items[choiceItem-1].itemCode;
    cart.items[cart.cartIndex].itemName = items[choiceItem-1].itemName;
    cart.items[cart.cartIndex].price    = items[choiceItem-1].price;
    cart.items[cart.cartIndex].qty      = quantity;
    cart.isItemExist = true;
    cart.cartIndex++;
}


void inputCartUser(int minIndexItem,int maxIndexItem) {
    int choiceItem = 0;
    int quantity   = 0;
    bool choiceItems = true;
    while (choiceItems == true){
        system("cls");
        listItem(minIndexItem,maxIndexItem);
        cout << "Masukan Kode Barang : ";
        cin >> choiceItem;
        // check if the choice stock is empty
        if (items[choiceItem-1].stock == 0){
            cout << "Maaf, stok barang kosong" << endl;
            cout << "Tekan Enter untuk kembali . . .";getch();continue;
        }
        // check if the choice is not in the range
        if (choiceItem+minIndexItem < minIndexItem+1 || choiceItem+minIndexItem > maxIndexItem){
            cout << "Pilihan tidak ada" << endl;
            cout << "Tekan Enter untuk kembali . . .";getch();continue;
        }
        cout << "Masukan Jumlah Barang : ";
        cin >> quantity;
        // check if the quantity is more than the stock
        if (quantity > items[choiceItem-1].stock){
            cout << "Maaf, stok barang tidak mencukupi" << endl;
            cout << "Tekan Enter untuk kembali . . .";
            getch();continue;
        }
        inputCart(choiceItem,quantity,minIndexItem);
        addCartMenu();
    }
}

// function pistolSubCategory, weaponsSubCategory, accessorySubCategory, handItemSubCategory for input item in cart
void pistolSubCategory(){
    int minIndexItem = 0;
    int maxIndexItem = 4;
    inputCartUser(minIndexItem,maxIndexItem);
}

void weaponsSubCategory(){
    int minIndexItem = 4;
    int maxIndexItem = 9;
    inputCartUser(minIndexItem,maxIndexItem);
}

void accessorySubCategory(){
    int minIndexItem = 9;
    int maxIndexItem = 14;
    inputCartUser(minIndexItem,maxIndexItem);
}

void handItemSubCategory(){
    int minIndexItem = 14;
    int maxIndexItem = 19;
    inputCartUser(minIndexItem,maxIndexItem);
}




// function for add item in cart
void addPistolItems() {
    // Magnun Sniper
    items[0].itemName="Magnun Sniper";
    items[0].price=1000000;
    items[0].stock=100;
    items[0].itemCode="001";

    // Ruger GP100
    items[1].itemName="Ruger GP100";
    items[1].price=800000;
    items[1].stock=00;
    items[1].itemCode="002";

    // Smith & Wesson S&W M&P Shield 9mm
    items[2].itemName="Smith & Wesson S&W M&P Shield 9mm";
    items[2].price=1320000;
    items[2].stock=100;
    items[2].itemCode="003";

    // Pistol G2 Premium
    items[3].itemName="Pistol G2 Premium";
    items[3].price=3500000;
    items[3].stock=100;
    items[3].itemCode="004";
}

// function to add weapons items
void addWeaponsItems() {
    // Senjata M4
    items[4].itemName="Senjata M4";
    items[4].price=1500000;
    items[4].stock=100;
    items[4].itemCode="005";

    // AK 47
    items[5].itemName="AK 47";
    items[5].price=1250000;
    items[5].stock=100;
    items[5].itemCode="006";

    // M16
    items[6].itemName="M16";
    items[6].price=1800000;
    items[6].stock=100;
    items[6].itemCode="007";

    // UMP 45
    items[7].itemName="UMP 45";
    items[7].price=900000;
    items[7].stock=100;
    items[7].itemCode="008";

    // M4A1
    items[8].itemName="M4A1";
    items[8].price=1750000;
    items[8].stock=100;
    items[8].itemCode="009";
}

// function to add data of accessory
void addDataAccsessory() {
    // Supresor
    items[9].itemName="Supresor";
    items[9].price=50000;
    items[9].stock=100;
    items[9].itemCode="010";

    // Laser Sight
    items[10].itemName="Laser Sight";
    items[10].price=25000;
    items[10].stock=100;
    items[10].itemCode="011";

    // Telescopic Sight
    items[11].itemName="Telescopic Sight";
    items[11].price=80000;
    items[11].stock=100;
    items[11].itemCode="012";

    // Bipod
    items[12].itemName="Bipod";
    items[12].price=35000;
    items[12].stock=100;
    items[12].itemCode="013";

    // Tactical Flashlight
    items[13].itemName="Tactical Flashlight";
    items[13].price=15000;
    items[13].stock=100;
    items[13].itemCode="014";
}

// function to add hand item category
void addHandItemCategory(){
    // Bom Asap
    items[14].itemName="Bom Asap";
    items[14].price=5000;
    items[14].stock=100;
    items[14].itemCode="015";

    // Bom Molotov
    items[15].itemName="Bom Molotov";
    items[15].price=7500;
    items[15].stock=100;
    items[15].itemCode="016";

    // Bambu Runcing
    items[16].itemName="Bambu Runcing";
    items[16].price=100;
    items[16].stock=300;
    items[16].itemCode="017";

    // Pedang Samurai
    items[17].itemName="Pedang Samurai";
    items[17].price=50000;
    items[17].stock=100;
    items[17].itemCode="018";

    // Pedang Naga
    items[18].itemName="Pedang Naga";
    items[18].price=25000;
    items[18].stock=100;
    items[18].itemCode="019";

    // keris
    items[19].itemName="keris";
    items[19].price=10000;
    items[19].stock=100;
    items[19].itemCode="020";
}