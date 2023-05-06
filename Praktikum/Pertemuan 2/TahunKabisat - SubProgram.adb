procedure TahunKabisat - SubProgram is
   procedure isLeapYear (
         Year : in  ??_Variable)
   is
      year : ??_Variable;
   begin
      if Year mod 4=0 and then year mod 100/=0 or else Year mod 400=0 then 
      else
         Put("bukan ");
      end if;
   end isLeapYear;
   procedure outputYear (
         Year : in  ??_Variable)
   is
      year : ??_Variable;
   begin
      Put(Year+" adalah ");
      isLeapYear(Year);
      Put_Line("tahun kabisat.");
   end outputYear;
   raptor_prompt_variable_zzyz : Unbounded_String;
   year : ??_Variable;
   isprogramrestart : ??_Variable;
begin
   loop
      Put_Line("-== Tahun Kabisat Checker ==-");
      loop
         raptor_prompt_variable_zzyz :="Masukkan Tahun setelah 1582";
         Put_Line(raptor_prompt_variable_zzyz);
         Get(Year);
         exit when Year>1582;
         Put_Line(Year+" adalah tahun sebelum 1582");
      end loop;
      outputYear(Year);
      loop
         raptor_prompt_variable_zzyz :="Apakah kamu ingin mengulang Program Tahun Kabisat Checker lagi? (Y/N)";
         Put_Line(raptor_prompt_variable_zzyz);
         Get(isProgramRestart);
         exit when isProgramRestart="Y" or else isProgramRestart="y" or else isProgramRestart="N" or else isProgramRestart="n";
         Put_Line("Masukkan input yang benar!");
      end loop;
      exit when isProgramRestart="N" or else isProgramRestart="n";
   end loop;
end TahunKabisat - SubProgram;
