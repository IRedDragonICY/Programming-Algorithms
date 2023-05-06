/* 
    Nama             : Mohammad Farid Hendianto
    NIM              : 2200018401
    Kelas            : A
    Mata Kuliah      : Algoritma Pemrograman
    Dosen            : Dr. Ardiansyah S.T., M.Cs
    Post Test Pertemuan ke-I
*/

#include <iostream>
#include <math.h>
using namespace std;
const int totalMaxPoints = 2;
struct Point{
    string name;
    float x;
    float y;
};Point Points[totalMaxPoints];
int indexPoint = 0;

void checkPoint(char check,int indexPoint);
void inputValue(Point Points[],char check);
float calculateDistance(Point Points[]);
void checkUseStepbyStep(int isUseStepbyStep);
void showStepbyStep(Point Points[], int isUseStepbyStep);
void printResult(Point Points[], float distance, int isUseStepbyStep);
void checkRestart(char check);

int main(){
    int isUseStepbyStep;
    char check;
    inputValue(Points,check);
    checkUseStepbyStep(isUseStepbyStep);
    float distance = calculateDistance(Points);
    printResult(Points,distance,isUseStepbyStep);
    checkRestart(check);
    return 0;
}

void inputValue(Point Points[],char check){
    Points[0].name = "A";
    Points[1].name = "B";
    for (int indexPoint=0;indexPoint<totalMaxPoints;indexPoint++){
        for (int input=0;input<3;input++){
        system("cls");cout<<"-== Input Point "<<Points[indexPoint].name<<" ==-"<<endl;
        cout<<"Titik "<<Points[indexPoint].name;
        if (input==0){
            cout<<"(x,y)"<<endl;
            cout<<"Masukkan koordinat x: ";cin>>Points[indexPoint].x;
        }
        if (input==1){
            cout<<"("<<Points[indexPoint].x<<",y)"<<endl;
            cout<<"Masukkan koordinat y: ";cin>>Points[indexPoint].y;
        }
        if (input==2){
            cout<<"("<<Points[indexPoint].x<<","<<Points[indexPoint].y<<")"<<endl;
            cout<<"Apakah titik "<<Points[indexPoint].name<<" sudah benar? (y/n)\n>";cin>>check;
            system("cls");
            switch (check){
                case 'Y':
                case 'y':
                    break;
                case 'N':
                case 'n':
                    indexPoint--;
                    break;
                default:
                    cout<<"Inputan salah!"<<endl;
                    system("pause");
                    break;
            }
        }
        }
    }
}

float calculateDistance(Point Points[]){
    float distance = sqrt(pow(Points[1].x-Points[0].x,2)+pow(Points[1].y-Points[0].y,2));
    return distance;
}

void checkUseStepbyStep(int isUseStepbyStep){
    system("cls");
    cout<<"Apakah mau ditampilkan dengan cara? (Y/N)\n>";char check;cin>>check;
    system("cls");
    switch (check){
        case 'Y':
        case 'y':
            isUseStepbyStep = 1;
            break;
        case 'N':
        case 'n':
            isUseStepbyStep = 0;
            break;
        default:
            cout<<"Inputan salah!"<<endl;
            system("pause");
            checkUseStepbyStep(isUseStepbyStep);
            break;
        }
}

void showStepbyStep(Point Points[], int isUseStepbyStep){
    if (isUseStepbyStep){
        cout<<"Jarak AB = sqrt((x2-x1)^2+(y2-y1)^2)"<<endl;
        cout<<"Jarak AB = sqrt(("<<Points[1].x<<"-"<<Points[0].x<<")^2+("<<Points[1].y<<"-"<<Points[0].y<<")^2)"<<endl;
        cout<<"Jarak AB = sqrt(("<<Points[1].x-Points[0].x<<")^2+("<<Points[1].y-Points[0].y<<")^2)"<<endl;
        cout<<"Jarak AB = sqrt("<<pow(Points[1].x-Points[0].x,2)<<"+"<<pow(Points[1].y-Points[0].y,2)<<")"<<endl;
    }
}

void printResult(Point Points[], float distance, int isUseStepbyStep){
    cout<<"-== Hasil Perhitungan ==-"<<endl;
    showStepbyStep(Points,isUseStepbyStep);
    cout<<"Jarak AB = sqrt("<<pow(Points[1].x-Points[0].x,2)+pow(Points[1].y-Points[0].y,2)<<")"<<endl;
    cout<<"Jarak AB = "<<distance<<endl;
}


void checkRestart(char check){
    cout<<"Apakah mau menghitung lagi? (Y/N)\n>";cin>>check;
    switch (check){
        case 'Y':
        case 'y':
            system("cls");
            main();
            break;
        case 'N':
        case 'n':
            break;
        default:
            cout<<"Inputan salah!"<<endl;
            system("pause");
            checkRestart(check);
            break;
        }
}