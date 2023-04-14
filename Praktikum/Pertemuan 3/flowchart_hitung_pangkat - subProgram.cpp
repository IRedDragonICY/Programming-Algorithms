#include <iostream>
#include <string>

using namespace std;
 void input (
       ??_Variable *x;
       ??_Variable *y)
{
   string raptor_prompt_variable_zzyz;

   raptor_prompt_variable_zzyz ="x"+((char) 696)+((char) 10)+"Masukkan nilai x (Bilangan real)";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x;
   while (1)
   {
      raptor_prompt_variable_zzyz =x+""+((char) 696)+((char) 10)+"Masukkan nilai y (Bilangan Bulat";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> y;
      if (y-floor(y)==0)) break;
      cout << "Error 1: Tidak memasukkan bilangan bulat" << endl;   }
}
 void pow (
       ?? x;
       ?? y;
       ??_Variable *result)
{

   result =x ** y;
}
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? digit;
   ?? divisor;
   ?? isprogramrestart;
   ?? stringsuperscriptnumber;
   ?? totaldigity;
   ?? indexarray;
   ?? superscriptnumber;
   ?? y;
   ?? x;
   ?? result;
   ??[] splitnumber = new ??[??+1];

   while (1)
   {
      result =0;
      input(x,y);
      pow(x,y,result);
      stringsuperscriptnumber ="";
      if (y<0)
      {
         stringsuperscriptnumber =((char) 8315);
         y =-y;
      }
      else
      {
      }
      divisor =1;
      totaldigity =0;
      while (y>=divisor)
      {
         divisor =divisor*10;
         totaldigity =totaldigity+1;
      }
      indexarray =1;
      digit =y;
      while (1)
      {
         splitnumber[indexarray] = digit % 10;
         if (!(indexarray<totaldigity) break;
         digit =floor(digit/10);
         indexarray =indexarray+1;
      }
      indexarray =totaldigity;
      while (1)
      {
         y =splitnumber(indexarray);
         if (y==1 || y==-1)
         {
            superscriptnumber =185;
         }
         else
         {
            if (y==2 || y==-2)
            {
               superscriptnumber =178;
            }
            else
            {
               if (y==3 || y==-3)
               {
                  superscriptnumber =179;
               }
               else
               {
                  if (y>0)
                  {
                     superscriptnumber =y+8304;
                  }
                  else
                  {
                     superscriptnumber =(y*-1)+8304;
                  }
               }
            }
         }
         stringsuperscriptnumber =stringsuperscriptnumber+""+((char) superscriptnumber);
         if (indexarray==1)) break;
         indexarray =indexarray-1;
      }
      cout << x+""+stringsuperscriptnumber+"="+result << endl;      while (1)
      {
         raptor_prompt_variable_zzyz ="Apakah kamu ingin mengulang Program menghitung pangkat lagi? (Y/N)";
         cout << raptor_prompt_variable_zzyz << endl;
         cin >> isprogramrestart;
         if (isprogramrestart=="Y" || isprogramrestart=="y" || isprogramrestart=="N" || isprogramrestart=="n")) break;
         cout << "Masukkan input yang benar!" << endl;      }
      if (isprogramrestart=="N" || isprogramrestart=="n")) break;
   }

   return 0;
}
