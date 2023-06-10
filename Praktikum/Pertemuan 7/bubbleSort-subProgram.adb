procedure bubbleSort-subProgram is
   procedure swap (
         a : in out  ??_Variable;
         b : in out  ??_Variable)
   is
      temp : ??_Variable;
   begin
      temp :=a;
      a :=b;
      b :=temp;
   end swap;
   procedure printArray (
         numberSeries : in out  ??;
         size : in out  ??_Variable)
   is
      i : ??_Variable;
      numberseries : ??_1D_Array(1..??);
   begin
      i :=1;
      loop
         Put(numberSeries(i)+" ");
         exit when  not (i<size);
         i :=i+1;
      end loop;
   end printArray;
   procedure bubbleSort (
         numberSeries : in out  ??;
         size : in out  ??_Variable)
   is
      j : ??_Variable;
      pass : ??_Variable;
      i : ??_Variable;
      k : ??_Variable;
      numberseries : ??_1D_Array(1..??);
   begin
      pass :=1;
      i :=1;
      j :=1;
      loop
         j :=1;
         loop
            Put_Line("Pass: "+pass);
            if numberSeries(j)>numberSeries(j+1) then 
               printArray(numberSeries,size);
               Put_Line("     Swapped:"+numberSeries(j)+" and "+numberSeries(j+1));
               swap(numberSeries(j),numberSeries(j+1));
               k :=1;
               loop
                  Put(numberSeries(k)+" ");
                  exit when  not (k<size);
                  k :=k+1;
               end loop;
               Put_Line("     After swapped");
            else
               printArray(numberSeries,size);
               Put_Line("     No swapped:"+numberSeries(j)+" and "+numberSeries(j+1));
            end if;
            j :=j+1;
            pass :=pass+1;
            exit when  not (j<size);
         end loop;
         i :=i+1;
         exit when  not (i<size+1);
      end loop;
   end bubbleSort;
   size : ??_Variable;
   numberseries : ??_1D_Array(1..??);
begin
   numberSeries(1) := 9;
   numberSeries(2) := 2;
   numberSeries(3) := 1;
   numberSeries(4) := 4;
   numberSeries(5) := 11;
   numberSeries(6) := 10;
   numberSeries(7) := 18;
   numberSeries(8) := 6;
   size :=numberSeries'Length;
   Put_Line("Unsorted Series: ");
   printArray(numberSeries,size);
   Put_Line("");
   bubbleSort(numberSeries,size);
   Put_Line("Sorted Series: ");
   printArray(numberSeries,size);
end bubbleSort-subProgram;
