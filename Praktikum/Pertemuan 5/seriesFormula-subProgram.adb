procedure seriesFormula-subProgram is
   procedure printFormula (
         n : in  ??_Variable)
   is
   begin
      if n=1 then 
         Put("1");
      else
         printFormula((n-1));
         if n mod 2=0 then 
            Put("-1/");
         else
            Put("+1/");
         end if;
         Put(n);
      end if;
   end printFormula;
   procedure series (
         n : in out  ??_Variable;
         result : in out  ??_Variable)
   is
   begin
      if n=1 then 
         result :=result+1;
      else
         if n mod 2=0 then 
            result :=result+(-1/n);
         else
            result :=result+(1/n);
         end if;
         n :=n-1;
         series(n,result);
      end if;
   end series;
   raptor_prompt_variable_zzyz : Unbounded_String;
   n : ??_Variable;
   result : ??_Variable;
begin
   raptor_prompt_variable_zzyz :="Masukkan bilangan n:";
   Put_Line(raptor_prompt_variable_zzyz);
   Get(n);
   result :=0;
   Put("F("+n+") = ");
   printFormula(n);
   series(n,result);
   Put_Line(Character'Val(10)+"Hasil: "+result);
end seriesFormula-subProgram;
