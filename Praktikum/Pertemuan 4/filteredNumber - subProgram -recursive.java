/**
  * NAME:
  * DATE:
  * FILE:
  * COMMENTS:
  */

public class filteredNumber - subProgram -recursive extends eecs.Gui
{
   public static ?? recursiveFilteringNumber(/* indexIteration should not be an output *//* totalFilteredNumber should not be an output *//* filteredNumber should not be an output */)
   {
      // declare variables
      ?? indexFilteredNumber = ??;
      ?? indexIteration = ??;
      ?? totalFilteredNumber = ??;
      ?? minIteration = ??;
      ?? maxIteration = ??;
      ??[] filteredNumber = new ??[??];
      
      minIteration = 1;
      maxIteration = 100;
      if (indexIteration % 5 == 0 && indexIteration % 7 == 0)
      {
         filteredNumber[indexFilteredNumber]	= indexIteration;
         indexFilteredNumber = indexFilteredNumber + 1;
         totalFilteredNumber = totalFilteredNumber + 1;
      }
      else
      {
      }
      return filteredNumber;
   } // close recursiveFilteringNumber
 
   public static void main(String[] args)
   {
      // declare variables
      ?? minIteration = ??;
      ?? indexIteration = ??;
      ?? totalFilteredNumber = ??;
      ?? maxIteration = ??;
      ?? indexFilteredNumber = ??;
      ??[] filteredNumber = new ??[??];
      
      filteredNumber[100]	= 0;
      totalFilteredNumber = 0;
      indexFilteredNumber = 1;
      minIteration = 1;
      maxIteration = 100;
      indexIteration = minIteration;
      while (indexIteration == maxIteration)
      {
         indexFilteredNumber = recursiveFilteringNumber(indexIteration,totalFilteredNumber,filteredNumber);
         indexIteration = indexIteration + 1;
      }
      printLine("Bilangan yang habis dibagi 5 dan 7 antara 1 sampai dengan 100");
      printLine("f(x) = {x | 1 <= x <= 100, x habis dibagi oleh 5 dan 7}");
      print("f(x) = {");
      indexIteration = minIteration;
      maxIteration = totalFilteredNumber;
      indexFilteredNumber = 1;
      subchart recursivePrintFilteredNumber
      while (indexIteration == maxIteration)
      {
         print(filteredNumber[indexFilteredNumber]);
         indexFilteredNumber = indexFilteredNumber + 1;
         recursivePrintFilteredNumber
      }
      print("}");
   } // close main
} // close filteredNumber - subProgram -recursive
