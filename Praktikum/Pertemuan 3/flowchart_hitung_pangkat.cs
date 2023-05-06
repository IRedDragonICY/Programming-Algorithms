using System;
using System.IO;
using System.Text;

namespace flowchart_hitung_pangkat
{
   public class main_class
   {
      static System.Random random_generator = new System.Random();
      public static void Main(string[] args)
      {
         string raptor_prompt_variable_zzyz;
         ?? superscriptnumber;
         ?? digit;
         ?? divisor;
         ?? isprogramrestart;
         ?? stringsuperscriptnumber;
         ?? totaldigity;
         ?? indexarray;
         ?? x;
         ?? y;
         ?? result;
         ??[] splitnumber = new ??[??+1];
      
         while (1)
         {
            raptor_prompt_variable_zzyz ="x"+((char) 696)+((char) 10)+"Masukkan nilai x (Bilangan real)";
            Console.WriteLine(raptor_prompt_variable_zzyz);
            x= Double.Parse(Console.ReadLine());
            while (1)
            {
               raptor_prompt_variable_zzyz =x+""+((char) 696)+((char) 10)+"Masukkan nilai y (Bilangan Bulat)";
               Console.WriteLine(raptor_prompt_variable_zzyz);
               y= Double.Parse(Console.ReadLine());
               if (y-floor(y)==0)) break;
               Console.WriteLine("Error 1: Tidak memasukkan bilangan bulat");
            }
            Result =x ** y;
            stringsuperscriptNumber ="";
            if (y<0)
            {
               stringsuperscriptNumber =((char) 8315);
               y =-y;
            }
            else
            {
            }
            divisor =1;
            totalDigity =0;
            while (y>=divisor)
            {
               divisor =divisor*10;
               totalDigity =totalDigity+1;
            }
            indexArray =1;
            digit =y;
            while (1)
            {
               splitnumber[indexArray] = digit % 10;
               if (!(indexArray<totalDigity) break;
               digit =floor(digit/10);
               indexArray =indexArray+1;
            }
            indexArray =totalDigity;
            while (1)
            {
               y =splitnumber(indexArray);
               if (y==1 || y==-1)
               {
                  superscriptNumber =185;
               }
               else
               {
                  if (y==2 || y==-2)
                  {
                     superscriptNumber =178;
                  }
                  else
                  {
                     if (y==3 || y==-3)
                     {
                        superscriptNumber =179;
                     }
                     else
                     {
                        if (y>0)
                        {
                           superscriptNumber =y+8304;
                        }
                        else
                        {
                           superscriptNumber =(y*-1)+8304;
                        }
                     }
                  }
               }
               stringsuperscriptNumber =stringsuperscriptNumber+""+((char) superscriptNumber);
               if (indexArray==1)) break;
               indexArray =indexArray-1;
            }
            Console.WriteLine(x+""+stringsuperscriptNumber+"="+Result);
            while (1)
            {
               raptor_prompt_variable_zzyz ="Apakah kamu ingin mengulang Program menghitung pangkat lagi? (Y/N)";
               Console.WriteLine(raptor_prompt_variable_zzyz);
               isProgramRestart= Double.Parse(Console.ReadLine());
               if (isProgramRestart=="Y" || isProgramRestart=="y" || isProgramRestart=="N" || isProgramRestart=="n")) break;
               Console.WriteLine("Masukkan input yang benar!");
            }
            if (isProgramRestart=="N" || isProgramRestart=="n")) break;
         }
      }
   }
}
