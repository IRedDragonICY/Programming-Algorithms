#include <iostream>
#include <iomanip>
using namespace std;
/*
OUTPUT:
3 x 2 = 6
Ganjil & prima x Genap & Prima = Genap
3 x 7 = 21
Ganjil & prima x Ganjil & Prima = Ganjil
2 x 7 = 14
Genap & prima x Ganjil & Prima = Ganjil
3 x 4 = 12
Ganjil & prima x Genap = Genap
2 x 4 = 8
Genap & prima x Genap = Genap
7 x 4 = 28
Ganjil & Prima x Genap = Genap
JUMLAH 89
RATA-RATA : 89/6 = 14.83
*/

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++){
        if (n % i == 0)
            return false;
    }
    return true;
}
bool isOdd(int n){
    if (n % 2 == 0)
        return false;
    return true;
}

bool isEven(int n){
    if (n % 2 == 0)
        return true;
    return false;
}

void NumbersMeanArrayCounting(){
    int arr[4] = {3, 2, 7, 4};
    float resultSum = 0;
    float mean = 0;
    float count = 0;
    int temp;
    cout << "OUTPUT:" << endl;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < i; j++){
            cout << setw(8) << arr[j] << setw(10) <<" x " << setw(8) << arr[i] << setw(9) << " = " << setw(3) << arr[j]*arr[i] << endl;
            // mengecek ganjil & genap;
            if (isOdd(arr[j]))
                cout << "\033[1;31m" << "Ganjil " << "\033[0m" ;
            if (isEven(arr[j]))
                cout << "\033[1;32m" << " Genap " << "\033[0m" ;
            // mengecek prima
            if (isPrime(arr[j]))
                cout <<  "\033[1;34m" << "& " << "\033[0m";
                cout << "\033[1;33m" << "Prima " << "\033[0m";

            cout<<"\033[1;35m" << " X " << "\033[0m";
            // mengecek ganjil & genap
            if (isOdd(arr[i]) && !isPrime(arr[i]))  
                // ubah tulisan ganjil ke merah
                cout << "\033[1;31m" << "     Ganjil     " << "\033[0m";
            if (isEven(arr[i]) && !isPrime(arr[i]))
                // ubah tulisan genap ke hijau
                cout << "\033[1;32m" << "     Genap     " << "\033[0m";
            if (isOdd(arr[i]) && isPrime(arr[i]))
                {
                    // ubah tulisan ganjil ke merah
                    cout << "\033[1;31m" << "Ganjil" << "\033[0m";

                    cout <<  "\033[1;34m" << " &" << "\033[0m";
                    // ubah tulisan prima ke kuning
                    cout << "\033[1;33m" << " Prima " << "\033[0m";
                }
            if (isEven(arr[i]) && isPrime(arr[i]))
                {
                    // ubah tulisan genap ke hijau
                    cout << "\033[1;32m" << " Genap" << "\033[0m";
                    cout <<  "\033[1;34m" << " &" << "\033[0m";
                    // ubah tulisan prima ke kuning
                    cout << "\033[1;33m" << " Prima " << "\033[0m";
                }


            cout << "=";
            if (isOdd(arr[i] * arr[j]))
                // ubah tulisan ganjil ke merah
                cout << "\033[1;31m" << " Ganjil" << "\033[0m" << endl;
            if (isEven(arr[i] * arr[j]))
                // ubah tulisan genap ke hijau
                cout << "\033[1;32m" << " Genap" << "\033[0m" << endl;
            if (isPrime(arr[i] * arr[j]))
                // ubah tulisan prima ke kuning
                cout << "\033[1;33m" << " &Prima" << "\033[0m" << endl;
            
            cout<<endl;

            resultSum += arr[i] * arr[j];
            count++;
        }
    }

    mean = resultSum / count;
    cout << "JUMLAH    = " << resultSum << endl;
    cout << "RATA-RATA = " << resultSum << "/" << count <<" = " << fixed << setprecision(2) << mean << endl;
}


int main()
{
    NumbersMeanArrayCounting();
    return 0;
}