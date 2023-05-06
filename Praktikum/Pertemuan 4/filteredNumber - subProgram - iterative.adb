procedure filteredNumber - subProgram - iterative is
   procedure filteringNumber (
         filteredNumber : in out  ??;
         totalFilteredNumber : in out  ??_Variable)
   is
      totalfilterednumber : ??_Variable;
      miniteration : ??_Variable;
      indexfilterednumber : ??_Variable;
      maxiteration : ??_Variable;
      indexiteration : ??_Variable;
      filterednumber : ??_1D_Array(1..??);
   begin
      indexFilteredNumber :=1;
      minIteration :=1;
      maxIteration :=100;
      indexIteration :=minIteration;
      loop
         if indexIteration mod 5=0 and then indexIteration mod 7=0 then 
            filteredNumber(indexFilteredNumber) := indexIteration;
            indexFilteredNumber :=indexFilteredNumber+1;
            totalFilteredNumber :=totalFilteredNumber+1;
         else
         end if;
         exit when indexIteration=maxIteration;
         indexIteration :=indexIteration+1;
      end loop;
   end filteringNumber;
   procedure printFilteredNumber (
         filteredNumber : in out  ??;
         totalFilteredNumber : in  ??)
   is
      indexfilterednumber : ??_Variable;
      maxiteration : ??_Variable;
      indexiteration : ??_Variable;
      filterednumber : ??_1D_Array(1..??);
   begin
      Put_Line("Bilangan yang habis dibagi 5 dan 7 antara 1 sampai dengan 100");
      Put_Line("f(x) = {x | 1 <= x <= 100, x habis dibagi oleh 5 dan 7}");
      Put("f(x) = {");
      indexIteration :=1;
      maxIteration :=totalFilteredNumber;
      indexFilteredNumber :=1;
      loop
         Put(filteredNumber(indexFilteredNumber));
         indexIteration :=indexIteration+1;
         exit when  not (indexIteration<=maxIteration);
         Put(",");
         indexFilteredNumber :=indexFilteredNumber+1;
      end loop;
      Put_Line("}");
   end printFilteredNumber;
   totalfilterednumber : ??_Variable;
   filterednumber : ??_1D_Array(1..??);
begin
   filteredNumber(100) := 0;
   totalFilteredNumber :=0;
   filteringNumber(filteredNumber,totalFilteredNumber);
   printFilteredNumber(filteredNumber,totalFilteredNumber);
end filteredNumber - subProgram - iterative;
