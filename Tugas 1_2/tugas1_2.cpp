/*
    Name     : Mohammad Farid Hendianto
    NIM      : 2200018401
    Class    : A
    Lecturer : Ardiansyah, S.T., M.Cs.
*/
#include <iostream>
#include <algorithm>
#include <ctime>
#include <conio.h>
#include <windows.h>
using namespace std;

char esc_char = 27;

// struct for menu
struct{
    int Number;
    string Name;
    string Description;
    int Price;
}menu[19];

// this function is used to generate default menu.
void defaultMenu()
{
    // {Number,Name,Description,Price}
    // Food
    menu[0]={1,"Ax Single Patty","Bun, Patty AX, Burgerax Original Sauce, Cheese Sauce, Vegetable",25500};
    menu[1]={2,"Ax Double Patty + Minum","Bun, Doyble Patty AX, Burgerax Original Sauce, Cheese Sauce, Vegetable",40500};
    menu[2]={3,"Ax Triple Patty + Minum","Bun, Triple Patty AX, Burgerax Original Sauce, Cheese Sauce, Vegetable",52500};
    menu[3]={4,"Beef Burger","Bun, Patty Premium, Burgerax Original Sauce, Cheese Sauce, Vegetable",30000};
    menu[4]={5,"Chicken Cheese Burger","Bun,Blackpepper Chicken Steak, Burgerax Original Sauce, Mozarella, Vegetable",30000};
    menu[5]={6,"Papa Burger + Minum","Bun, Patty Premium, Red Cheddar, Caramelized Onion, Burgerax Original Sauce, Vegetable",40500};
    menu[6]={7,"Maddog + Minum","Bun, Patty Premium, Red Cheddar, Egg, Burgerax Original Sauce, Vegetable",45000};
    menu[7]={8,"Cheese Burger + Minum","Bun, Patty Premium, Red Cheddar, Egg, Burgerax Original Sauce, Vegetable",45000};
    menu[8]={9,"Bozz Burger + Minum", "Bun, Dobule Patty Premium, Double Red Cheddar, Burgerax Original Sauce, Vegetable",52500};
    menu[9]={10,"Picasso Burger + Minum","Bun, Patty Premium, Beef Steak, Mozarella, Burgerax Original Sauce, Vegetable",63000};
    menu[10]={11,"Cubanos + Minum","Baguette, BBQ Beef Steak, Mozarella, Vegetable",37500};
    menu[11]={12,"Philly Cheese Steak + Minum","Baguette, Blackpepper Beef Steak, Mozarella",60000};
    menu[12]={13,"Chicken Cheese Steak + Minum","Baguette, Blackpepper Chicken Steak, Mozarella",40000};
    menu[13]={14,"Bogo","",12000};
    menu[14]={15,"Bunsdit","",19500};
    // Special Paket Menu
    menu[15]={16,"paket couple","1 pcs maddog burger, 1 pcs cheese burger",95000};
    menu[16]={17,"ber-tiga asik","3 pcs burgerak double patty, 2 pcs mineral water, 1 pcs frestea",125000};
    menu[17]={18,"hemat ber-dua","1 pcs chicken cheese burger, 1 pcs burgerax single patty, 2 pcs mineral water",65000};
    menu[18]={19,"paket personal","maddog burger, mineral water, chips",55000};
}

// Masukkan nama dan harga tiap menu ke dalam array. Bangkitkan bilangan integer secara acak antara 0 hingga ukuran array.
void randomMenuSelector(){
    // [0m = normal, [1m = bold, [3m = italic
    srand(time(0));
    int randomMenu = rand() % (sizeof(menu)/sizeof(menu[0]));
    cout<<"For You:"<<endl;
    cout<<"| No Menu:  "<<menu[randomMenu].Number<<endl;
    cout<<"| "<<"\e[1m"<<menu[randomMenu].Name<<"\e[0m"<<endl;
    cout<<"| "<<"\e[3m"<<menu[randomMenu].Description<<"\e[0m"<<endl;
    cout<<"| Rp. "<<menu[randomMenu].Price<<endl;
}


int main(){
    defaultMenu();
    randomMenuSelector();
}