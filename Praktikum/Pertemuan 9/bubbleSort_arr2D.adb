procedure bubbleSort_arr2D is
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
   raptor_prompt_variable_zzyz : Unbounded_String;
   j : ??_Variable;
   ascending : ??_Variable;
   i : ??_Variable;
   k : ??_Variable;
   maxe : ??_Variable;
   matrix1dtemp : ??_1D_Array(1..??);
   matrix : ??_2D_Array(1..??,1..??);
begin
   MAXE :=3;
   matrix(MAXE,MAXE) := 0;
   i :=1;
   loop
      j :=1;
      loop
         raptor_prompt_variable_zzyz :="-== Matrix ==-"+Character'Val(10)+"Masukkan nilai matrix ["+i+"]"+"["+j+"]:";
         Put_Line(raptor_prompt_variable_zzyz);
         Get(matrix(i,j));
         exit when  not (j<MAXE);
         j :=j+1;
      end loop;
      exit when  not (i<MAXE);
      i :=i+1;
   end loop;
   Put_Line("Matriks sebelum diurutkan");
   i :=1;
   loop
      j :=1;
      loop
         Put(matrix(i,j)+" ");
         exit when  not (j<MAXE);
         j :=j+1;
      end loop;
      Put_Line("");
      exit when  not (i<MAXE);
      i :=i+1;
   end loop;
   loop
      raptor_prompt_variable_zzyz :="Mau diurutkan secara ascending?"+Character'Val(10)+"(1 = ya, 0 = tidak)";
      Put_Line(raptor_prompt_variable_zzyz);
      Get(ascending);
      exit when ascending=1 or else ascending=0;
   end loop;
   matrix1DTemp(MAXE*MAXE) := 0;
   k :=1;
   i :=1;
   loop
      j :=1;
      loop
         matrix1DTemp(k) := matrix(i,j);
         k :=k+1;
         exit when  not (j<MAXE);
         j :=j+1;
      end loop;
      exit when  not (i<MAXE);
      i :=i+1;
   end loop;
   i :=1;
   loop
      j :=1;
      loop
         if ascending=1 then 
            if matrix1DTemp(j)>matrix1DTemp(j+1) then 
               swap(matrix1DTemp(j),matrix1DTemp(j+1));
            else
            end if;
         else
            if matrix1DTemp(j)<matrix1DTemp(j+1) then 
               swap(matrix1DTemp(j),matrix1DTemp(j+1));
            else
            end if;
         end if;
         j :=j+1;
         exit when  not (j<(MAXE*MAXE));
      end loop;
      i :=i+1;
      exit when  not (i<(MAXE*MAXE)+1);
   end loop;
   k :=1;
   i :=1;
   loop
      j :=1;
      loop
         matrix(i,j) := matrix1DTemp(k);
         k :=k+1;
         exit when  not (j<MAXE);
         j :=j+1;
      end loop;
      exit when  not (i<MAXE);
      i :=i+1;
   end loop;
   Put_Line("Matriks setelah diurutkan");
   i :=1;
   loop
      j :=1;
      loop
         Put(matrix(i,j)+" ");
         exit when  not (j<MAXE);
         j :=j+1;
      end loop;
      Put_Line("");
      exit when  not (i<MAXE);
      i :=i+1;
   end loop;
end bubbleSort_arr2D;
