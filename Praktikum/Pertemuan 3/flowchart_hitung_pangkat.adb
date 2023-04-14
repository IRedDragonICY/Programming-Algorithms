procedure flowchart_hitung_pangkat is
   raptor_prompt_variable_zzyz : Unbounded_String;
   superscriptnumber : ??_Variable;
   digit : ??_Variable;
   divisor : ??_Variable;
   isprogramrestart : ??_Variable;
   stringsuperscriptnumber : ??_Variable;
   totaldigity : ??_Variable;
   indexarray : ??_Variable;
   x : ??_Variable;
   y : ??_Variable;
   result : ??_Variable;
   splitnumber : ??_1D_Array(1..??);
begin
   loop
      raptor_prompt_variable_zzyz :="x"+Character'Val(696)+Character'Val(10)+"Masukkan nilai x (Bilangan real)";
      Put_Line(raptor_prompt_variable_zzyz);
      Get(x);
      loop
         raptor_prompt_variable_zzyz :=x+""+Character'Val(696)+Character'Val(10)+"Masukkan nilai y (Bilangan Bulat)";
         Put_Line(raptor_prompt_variable_zzyz);
         Get(y);
         exit when y-floor(y)=0;
         Put_Line("Error 1: Tidak memasukkan bilangan bulat");
      end loop;
      Result :=x ** y;
      stringsuperscriptNumber :="";
      if y<0 then 
         stringsuperscriptNumber :=Character'Val(8315);
         y :=-y;
      else
      end if;
      divisor :=1;
      totalDigity :=0;
      while (y>=divisor) loop
         divisor :=divisor*10;
         totalDigity :=totalDigity+1;
      end loop;
      indexArray :=1;
      digit :=y;
      loop
         splitnumber(indexArray) := digit mod 10;
         exit when  not (indexArray<totalDigity);
         digit :=floor(digit/10);
         indexArray :=indexArray+1;
      end loop;
      indexArray :=totalDigity;
      loop
         y :=splitnumber(indexArray);
         if y=1 or else y=-1 then 
            superscriptNumber :=185;
         else
            if y=2 or else y=-2 then 
               superscriptNumber :=178;
            else
               if y=3 or else y=-3 then 
                  superscriptNumber :=179;
               else
                  if y>0 then 
                     superscriptNumber :=y+8304;
                  else
                     superscriptNumber :=(y*-1)+8304;
                  end if;
               end if;
            end if;
         end if;
         stringsuperscriptNumber :=stringsuperscriptNumber+""+Character'Val(superscriptNumber);
         exit when indexArray=1;
         indexArray :=indexArray-1;
      end loop;
      Put_Line(x+""+stringsuperscriptNumber+"="+Result);
      loop
         raptor_prompt_variable_zzyz :="Apakah kamu ingin mengulang Program menghitung pangkat lagi? (Y/N)";
         Put_Line(raptor_prompt_variable_zzyz);
         Get(isProgramRestart);
         exit when isProgramRestart="Y" or else isProgramRestart="y" or else isProgramRestart="N" or else isProgramRestart="n";
         Put_Line("Masukkan input yang benar!");
      end loop;
      exit when isProgramRestart="N" or else isProgramRestart="n";
   end loop;
end flowchart_hitung_pangkat;
