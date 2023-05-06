/**
  * NAME:
  * DATE:
  * FILE:
  * COMMENTS:
  */

public class flowchart_hitung_pangkat extends eecs.Gui
{
   public static void main(String[] args)
   {
      // declare variables
      String raptor_prompt_variable_zzyz = null;
      ?? digit = ??;
      ?? divisor = ??;
      ?? stringsuperscriptNumber = ??;
      ?? isProgramRestart = ??;
      ?? indexArray = ??;
      ?? Result = ??;
      ?? superscriptNumber = ??;
      ?? x = ??;
      ?? y = ??;
      ?? totalDigity = ??;
      ??[] splitnumber = new ??[??];
      
      while	(1)
      {
         raptor_prompt_variable_zzyz = "x" + 696 + 10 + "Masukkan nilai x (Bilangan real)";
         x = get???(raptor_prompt_variable_zzyz);
         while	(1)
         {
            raptor_prompt_variable_zzyz = x + "" + 696 + 10 + "Masukkan nilai y (Bilangan Bulat)";
            y = get???(raptor_prompt_variable_zzyz);
            if (y - floor(y) == 0)	break;
            printLine("Error 1: Tidak memasukkan bilangan bulat");
         }
         Result = x Math.pow(??, ??) y;
         stringsuperscriptNumber = "";
         if (y < 0)
         {
            stringsuperscriptNumber = 8315;
            y =  - y;
         }
         else
         {
         }
         divisor = 1;
         totalDigity = 0;
         while (y >= divisor)
         {
            divisor = divisor * 10;
            totalDigity = totalDigity + 1;
         }
         indexArray = 1;
         digit = y;
         while	(1)
         {
            splitnumber[indexArray]	= digit % 10;
            if (indexArray < totalDigity)	break;
            digit = floor(digit / 10);
            indexArray = indexArray + 1;
         }
         indexArray = totalDigity;
         while	(1)
         {
            y = splitnumber[indexArray];
            if (y == 1 || y ==  - 1)
            {
               superscriptNumber = 185;
            }
            else
            {
               if (y == 2 || y ==  - 2)
               {
                  superscriptNumber = 178;
               }
               else
               {
                  if (y == 3 || y ==  - 3)
                  {
                     superscriptNumber = 179;
                  }
                  else
                  {
                     if (y > 0)
                     {
                        superscriptNumber = y + 8304;
                     }
                     else
                     {
                        superscriptNumber = (y *  - 1) + 8304;
                     }
                  }
               }
            }
            stringsuperscriptNumber = stringsuperscriptNumber + "" + superscriptNumber;
            if (indexArray == 1)	break;
            indexArray = indexArray - 1;
         }
         printLine(x + "" + stringsuperscriptNumber + "=" + Result);
         while	(1)
         {
            raptor_prompt_variable_zzyz = "Apakah kamu ingin mengulang Program menghitung pangkat lagi? (Y/N)";
            isProgramRestart = get???(raptor_prompt_variable_zzyz);
            if (isProgramRestart == "Y" || isProgramRestart == "y" || isProgramRestart == "N" || isProgramRestart == "n")	break;
            printLine("Masukkan input yang benar!");
         }
         if (isProgramRestart == "N" || isProgramRestart == "n")	break;
      }
   } // close main
} // close flowchart_hitung_pangkat
