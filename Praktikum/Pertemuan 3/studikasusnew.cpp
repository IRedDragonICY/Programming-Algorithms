#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Ingredients {
    private:
        string name;
        int price, totalKG;
    
    public:
        Ingredients(string n, int p, int k) : name(n), price(p), totalKG(k) {}
    
        string getName() const { return name; }
        int getPrice() const { return price; }
        int getTotalKG() const { return totalKG; }
};

class Menu {
    private:
        string name;
        vector<Ingredients> ingredients;

    public:
        Menu(string n) : name(n) {}
    
        void addIngredient(string n, int p, int k) {
            Ingredients ing(n, p, k);
            ingredients.push_back(ing);
        }
        
        string getName() const { return name; }
        vector<Ingredients> getIngredients() const { return ingredients; }
};

class Restaurant {
    private:
        vector<Menu> menus;
    
    public:
        void addMenu(string n, int numIngredients) {
            Menu m(n);
            for(int i = 0; i < numIngredients; i++) {
                string inName;
                int inPrice, inKg;
                cout << "=============================================" << endl;
                cout << "Masukkan nama bahan baku #" << i+1 << ": ";
                cin.ignore();
                getline(cin, inName);
                cout << "Masukkan harga per kg: ";
                cin >> inPrice;
                cout << "Masukkan jumlah kg: ";
                cin >> inKg;
                m.addIngredient(inName, inPrice, inKg);
            }
            menus.push_back(m);
        }
        
        void displayMenus() const {
            int totalHarga = 0;
            for (int i = 0; i < menus.size(); i++) {
                cout << "=============================================" << endl;
                cout << "Menu ke-" << i+1 << endl;
                cout << "Nama menu: " << menus[i].getName() << endl;
                cout << "Bahan baku: " << endl;
                vector<Ingredients> ingredients = menus[i].getIngredients();
                for (int j = 0; j < ingredients.size(); j++) {
                    cout << "Bahan baku #" << j+1 << ": " << ingredients[j].getName() << endl;
                    cout << "Harga per kg: " << ingredients[j].getPrice() << endl;
                    cout << "Jumlah kg: " << ingredients[j].getTotalKG() << endl;
                    int totalIngredientHarga = ingredients[j].getPrice() * ingredients[j].getTotalKG();
                    cout << "Total harga: " << totalIngredientHarga << endl;
                    totalHarga += totalIngredientHarga;
                }
            }
            cout << "=============================================" << endl;
            cout << "Total harga keseluruhan menu: "<< totalHarga << endl;
        }
};

int main(){
    Restaurant r;
    int totalMenu;
    cout << "============================="<<endl;
    cout << "Masukkan jumlah menu: ";
    cin >> totalMenu;
    for (int i = 0; i < totalMenu; i++) 
    {
        cout << "==========================" << endl;
        cout << "Menu ke-" << i+1 << endl;
        cout << "Masukkan nama menu: ";
        string mName;
        cin.ignore();
        getline(cin, mName);
        cout << "Masukkan jumlah bahan baku: ";
        int numIngredients;
        cin >> numIngredients;
        r.addMenu(mName, numIngredients);
    }
    cout<<"============================="<<endl;
    cout<<"Bahan yang sudah diinputkan: "<<endl;
    r.displayMenus();
}
