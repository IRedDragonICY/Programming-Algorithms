/*
    Name     : Mohammad Farid Hendianto
    NIM      : 2200018401
    Class    : A
    Lecturer : Ardiansyah, S.T., M.Cs.
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;

// Generate random radius. The range of the radius is 10-40.
void randomRadius(int &radius)
{
    int minRadius = 10;
    int maxRadius = 40;
    srand(time(0));
    radius = rand() % (maxRadius-minRadius+1) + minRadius;
}

// Calculate the area of the circle.
int calculateCircleArea(int radius)
{
    double CircleArea = M_PI * pow(radius,2);
    return CircleArea;
}

// Calculate the circumference of the circle.
int calculateCircleCircumference(int radius)
{
    double CircleCircumference = 2 * M_PI * radius;
    return CircleCircumference;
}

// Calculate the volume of the ball.
int calculateBallVolume(int radius)
{
    double BallVolume = (4/3) * M_PI * pow(radius,3);
    return BallVolume;
}

// Display the result of the calculation.
void resultBox(int radius)
{
    cout<<"============================================================================="<<endl;
    cout<<"Radius               : "<<radius<<" cm"<<endl;
    cout<<"============================================================================="<<endl;
    cout<<"Circle Area          : "<<calculateCircleArea(radius)<<" cm^2"<<endl;
    cout<<"Circle Circumference : "<<calculateCircleCircumference(radius)<<" cm"<<endl;
    cout<<"Ball Volume          : "<<calculateBallVolume(radius)<<" cm^3"<<endl;
    cout<<"============================================================================="<<endl;
}

int main()
{
    int radius;
    double area;
    int totalMenuConfirm = 2;
    bool isMenuConfirmSelected[totalMenuConfirm]={1,0};
    bool isInputing = true;
    randomRadius(radius);
    while (isInputing)
    {
        system("cls");
        resultBox(radius);
        cout<<"Do you want to try again?"<<endl;
        if (isMenuConfirmSelected[0])
            cout<<"> ";
        else
            cout<<"  ";
        cout<<"Yes              ";
        if (isMenuConfirmSelected[1])
            cout<<"> ";
        else
            cout<<"  ";
        cout<<"No"<<endl;
        // keypress
        switch (getch()){
        case 75:
            for (int i = 0; i < totalMenuConfirm; i++)
            {
                if (isMenuConfirmSelected[i]){
                    if (i == 0)
                        break;
                    else
                    {
                        isMenuConfirmSelected[i] = 0;
                        isMenuConfirmSelected[i-1] = 1;
                        break;
                    }
                }
            }
            break;
        case 77:
            for (int i = 0; i < totalMenuConfirm; i++)
            {
                if (isMenuConfirmSelected[i]){
                    if (i == 1)
                        break;
                    else
                    {
                        isMenuConfirmSelected[i] = 0;
                        isMenuConfirmSelected[i+1] = 1;
                        break;
                    }
                }
            }
            break;
        case 13:
            for (int i = 0; i < totalMenuConfirm; i++)
            {
                if (isMenuConfirmSelected[i]){
                    isInputing = false;
                    switch (i)
                    {
                        case 0:
                            system("cls");
                            main();
                            break;
                        case 1:
                            
                            cout<<"Thank you for using this program.";
                            break;
                    }
                    break;
                }
            }
            break;
        }
    }
    return 0;
}
