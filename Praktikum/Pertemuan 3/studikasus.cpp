/*
Buatlah program dimana sebuah rumah makan mempunyai menu sebagai berikut:
1. Ayam geprek : 21000
2. Ayam goreng : 17000
3. Udang goreng : 19000
4. Cumi goreng : 20000
5. Ayam bakar : 25000
Rumah makan tersebut menyediakan jasa delivery order, pelanggan yang jarak rumahnya kurang dari
3KM akan diberi biaya ongkir sebanyak 15000. Sedangkan yang lebih dari 3 KM diberi biaya ongkir 25000.
Output yang keluar diharapkan dalam bentuk slip pembayaran.n dalam bentuk slip pembayaran.
*/
/*
Kelompok 1:
1. Muhammad Farid Hendianto (Ndik)   {2200018401}
2. Reyhanssan Islamey       (Justin) {2200018411}
3. Rendie Abdi Saputra      (Ryu)    {2200018094}
*/
#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <ctime>
#include <cstdlib>
using namespace std;

class restaurants{
    public:
        bool isDelivery;
        struct menuRestaurant{
            int ID;
            string name;
            int price;
            int stock;
        };menuRestaurant menu[5] = {
            {1,"Ayam geprek",21000,50},
            {2,"Ayam goreng",17000,50},
            {3,"Udang goreng",19000,50},
            {4,"Cumi goreng",20000,50},
            {5,"Ayam bakar",25000,50}
        };
        // struct customer cart
        struct customer{
            string name;
            double money;
            double distance;
            string address;
            int phone;
            string courier;
            struct cart{
            int id;
            int qty;
            };cart cart[5];
        // struct payment 
        struct payment{
            int shippingCost;
            int shippingFreeCost;
            double discount;
            double total;
            double totalPrice;
            double change;
            };payment payment;
            };customer customer;

        // function for make random courier
        void courierDelivery(){
            srand(time(0));
            int deliver = rand() % 5 + 1;
            if (deliver == 0){
                customer.courier = "SumantoFood";   
            }
            if (deliver == 1){
                customer.courier = "Burok Express";
            }
            if (deliver == 2){
                customer.courier = "Jin Express";
            }
            if (deliver == 3){
                customer.courier = "AligatorFood";
            }
            if (deliver == 4){
                customer.courier = "Ocinci Express";
            }
            if (deliver == 5){
                customer.courier == "Rungkad Express";
            }
        }
        //funtion for showing List menu 
        void listMenu(){
            cout << "Menu Warung Makan Rendie" << endl;
            cout << "---------------------------------------------------------------------------" << endl;
            cout << left << setw(5) << "ID" << setw(20) << "Nama" << setw(10) << "Harga" << setw(10) << "banyak kamu pilih" << endl;
            for(int i=0;i<5;i++){
                cout << left << setw(5) << menu[i].ID << setw(20) << menu[i].name << setw(10) << menu[i].price << setw(10) << customer.cart[i].qty << endl;
            }
            cout << "---------------------------------------------------------------------------" << endl;
        }
        
        //function for calculate and showing payment
        void showReceipt(){
            cout << "---------------------------------------------------------------------------" << endl;
            cout << "WR Makan Rendi" << endl;
            cout << "Jl. Ahmad Yani KM 24" << endl;
            time_t now = time(0);
            tm *ltm = localtime(&now);
            cout << "Tanggal: " << ltm->tm_mday << "/" << 1 + ltm->tm_mon << "/" << 1900 + ltm->tm_year << endl;
            cout << "Kepada Yth " << customer.name << endl;
            cout << "Nama: " << customer.name << endl;
            cout << "---------------------------------------------------------------------------" << endl;
            cout << "|" << setw(5) << "Qty" << setw(3) << "|" << setw(15) << "Menu" << setw(15) << "|" << setw(15) << "Harga" << setw(8) << "|" << setw(13) << "Jumlah" << setw(8) << "|" << endl;
            cout << "---------------------------------------------------------------------------" << endl;
            for (int i = 0; i < 5; i++){
                if (customer.cart[i].qty != 0){
                    cout << "|" << setw(5) << customer.cart[i].qty << setw(3) << "|" << setw(15) << menu[i].name << setw(15) << "|" << setw(15) << menu[i].price << setw(8) <<"|"<< setw(13) << customer.cart[i].qty * menu[i].price << setw(8) << "|" << endl;
                    cout << "---------------------------------------------------------------------------" << endl;
                }
            }
            cout << "                            Harga Makanan dan Minuman  : Rp. " << customer.payment.totalPrice << endl;
            if (isDelivery){
            cout << "                                          Biaya Ongkir : Rp. " << customer.payment.shippingCost << endl;
            }
            cout << "Diskon        : " << customer.payment.discount * 100 << " %" << endl;
            cout << "---------------------------------------------------------------------------" << endl;
            cout << "                                        Total Harga    : Rp. " << customer.payment.total << endl;
            cout << "                                              Tunai    : Rp. " << customer.money << endl;
            cout << "---------------------------------------------------------------------------" << endl;
            cout << "                                          Kembalian    : Rp. " << customer.payment.change << endl;
            
            if (isDelivery){
                cout << "Kurir         : " << customer.courier<<endl;
                cout << "Jarak tempuh  : " << customer.distance << " KM" << endl;
            }
                cout << "---------------------------------------------------------------------------" << endl;
            exit(0);
        }
        // function for showing restaurant logo
        void showRstaurantLogo(){
            cout << "------------------------------------------------------------------------------------- " << endl;
            cout << "||  _       ______     __  ___      __                  ____                 ___     || " << endl; 
            cout << "|| | |     / / __ \\   /  |/  /___ _/ /______ _____     / __ \\___  ____  ____/ (_)__  || " << endl;
            cout << "|| | | /| / / /_/ /  / /|_/ / __ `/ //_/ __ `/ __ \\   / /_/ / _ \\/ __ \\/ __  / / _ \\ || " << endl;
            cout << "|| | |/ |/ / _, _/  / /  / / /_/ / ,< / /_/ / / / /  / _, _/  __/ / / / /_/ / /  __/ || " << endl;
            cout << "|| |__/|__/_/ |_|  /_/  /_/\\__,_/_/|_|\\__,_/_/ /_/  /_/ |_|\\___/_/ /_/\\__,_/_/\\___/  || " << endl;
            cout << "-------------------------------------------------------------------------------------" << endl;
        }
};restaurants restaurant;

//class for calculate payment
class calculate{
    private:
        int maxMenu=5;
        void bonus(){
            // if (restaurant.customer.payment.total > 25000){
            //     restaurant.customer.payment.shippingFreeCost = 3000;
            // }
            // if (restaurant.customer.payment.total > 50000){
            //     restaurant.customer.payment.shippingFreeCost = 5000;
            //     restaurant.customer.payment.discount = 0.15;
            // }
            // if (restaurant.customer.payment.total > 150000){
            //     restaurant.customer.payment.shippingFreeCost = 8000;
            //     restaurant.customer.payment.discount = 0.35;
            // }
        }
        //funtion to add some change to customer money
        void change(){
            restaurant.customer.payment.change = restaurant.customer.money - restaurant.customer.payment.total;
        }
        //funtion to check if customer money is enough
        void isMoneyEnough(){
            while (restaurant.customer.money < restaurant.customer.payment.total){
                cout << "Harga total: " << restaurant.customer.payment.total << endl;
                cout << "Uang tunai kamu tidak cukup, silahkan masukkan uang tunai lagi: ";
                cin >> restaurant.customer.money;
            }
        }
    public:
        //funtion to calculate shipping cost using distance delivery
        void distance(){
            if (restaurant.customer.distance <= 3){
                restaurant.customer.payment.shippingCost += 15000;
            }
            if (restaurant.customer.distance > 3){
                restaurant.customer.payment.shippingCost += 25000;
            }
        }
        // function for calculate total price
        void total(){
            for (int i = 0; i < maxMenu; i++){
                restaurant.customer.payment.total += restaurant.customer.cart[i].qty * restaurant.menu[i].price;
            }
            restaurant.customer.payment.totalPrice = restaurant.customer.payment.total;
            bonus();
            restaurant.customer.payment.shippingCost -= restaurant.customer.payment.shippingFreeCost;
            restaurant.customer.payment.total += restaurant.customer.payment.shippingCost;
            restaurant.customer.payment.total -= restaurant.customer.payment.total * restaurant.customer.payment.discount;
            isMoneyEnough();
            change();
        }
};calculate calc;

//class for all opeating system waroeng makan 
class options{
    private:
        // function for showing main menu
        void showMenuMain(){
            system("cls");
            restaurant.showRstaurantLogo();
            cout << "1. Pilih menu" << endl;
            cout << "2. Checkout" << endl;
            cout << "3. Keluar" << endl;
            cout << "Pilih option: ";
        }
    public:
        // function for showing main menu
        void main(){
        int option;
            system("cls");
            restaurant.showRstaurantLogo();
            showMenuMain();
            cin >> option;
            switch (option){
                case 1:
                    chooseMenu();
                    break;
                case 2:
                    for (int i = 0; i < 5; i++){
                        if (restaurant.customer.cart[i].qty != 0){
                            checkout();
                            break;
                        }
                        if (i == 4){
                            cout<<"Anda belum membeli apa-apa" << endl;
                            sleep(3);
                            system("cls");
                            return main();
                        }
                    }
                    break;
                case 3:
                    break;
                default:
                    cout << "Pilihan tidak tersedia" << endl;
                    sleep(3);
                    system("cls");
                    return main();
                    break;
            }
        }
        //function for user choose menu in this restaurant
        void chooseMenu(){
            system("cls");
            restaurant.listMenu();
            int menu;
            int qty;
                cout<<"Pilih menu: ";
                cin>>menu;
                if (menu > 5 or menu < 1){
                    cout << "Menu tidak tersedia . . ." << endl;
                    sleep(3);
                    system("cls");
                    return chooseMenu();
                }
                if (restaurant.menu[menu-1].stock == 0){
                    if (restaurant.customer.cart[menu-1].qty == 0){
                        cout<<"Menu tersebut sudah habis . . ."<<endl;
                        sleep(3);
                        system("cls");
                        return chooseMenu();
                    }
                }
            cout<<"P.S. untuk mengurangi banyaknya pilihan, cukup masukkan angka negatif"<<endl;
            cout<<"banyak kamu pilih: ";
            cin>>qty;
            if (qty > restaurant.menu[menu-1].stock){
                cout << "Menu tersebut tidak cukup . . . ." << endl;
                sleep(3);
                system("cls");
                return chooseMenu();
            }
            if (restaurant.customer.cart[menu-1].qty + qty < 0){
                cout<<"Kamu terlalu banyak mengurangi pilihan"<<endl;
                sleep(3);
                system("cls");
                return chooseMenu();
            }
            restaurant.menu[menu-1].stock -= qty;
            restaurant.customer.cart[menu-1].qty += qty;
            main();
        }
        //function for checkout in restaurant or not
        void checkout(){
            int option;
            restaurant.courierDelivery();
            system("cls");
            cout << "Masukkan Tunai: Rp. ";
            cin >> restaurant.customer.money;
            cout << "Pilih metode pembayaran" << endl;
            cout << "1. Bayar di tempat" << endl;
            cout << "2. Bayar via delivery" << endl;
            cout << "Pilih option: ";
            cin >> option;
            switch (option){
                case 1:
                    checkoutInPlace();
                    restaurant.isDelivery = false;
                case 2:
                    restaurant.isDelivery = true;
                    checkoutDelivery();
                    break;
                default:
                    cout << "Pilihan tidak tersedia" << endl;
                    sleep(3);
                    system("cls");
                    return checkout();
                    break;
            }
        }
        // function for checkout with delivery
        void checkoutDelivery(){
            system("cls");
            cout<<"Masukkan jarak rumah: ";cin>>restaurant.customer.distance;
            calc.distance();
            calc.total();
            restaurant.showReceipt();
            sleep(3);
            system("cls");
        }
        // function for checkout in place
        void checkoutInPlace(){
            system("cls");
            calc.total();
            restaurant.showReceipt();
            sleep(3);
            system("cls");
        }
};options option;

int main(){
    cout << "Masukan nama anda : ";
    getline(cin, restaurant.customer.name);
    option.main();
    return 0;
}