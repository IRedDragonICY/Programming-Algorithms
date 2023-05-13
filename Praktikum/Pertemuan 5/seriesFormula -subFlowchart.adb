procedure seriesFormula -subFlowchart is
   raptor_prompt_variable_zzyz : Unbounded_String;
   result : ??_Variable;
   n : ??_Variable;
   i : ??_Variable;
   isnegative : ??_Variable;
begin
   n :=0;
   result :=0;
   isNegative :=false;
   raptor_prompt_variable_zzyz :="Masukkan nilai n:";
   Put_Line(raptor_prompt_variable_zzyz);
   Get(n);
   i :=1;
   Put("F("+n+")  =");
   if isNegative=true then 
      Put("-1/"+i);
      result :=result-1/i;
      isNegative :=false;
   else
      if i=1 then 
         Put("1");
         result :=result+1;
      else
         Put("+1/"+i);
         result :=result+1/i;
      end if;
      isNegative :=true;
   end if;
   i :=i+1;
   if i<=n then 
   else
   end if;
   Put(Character'Val(10)+"Hasil: "+result);
end seriesFormula -subFlowchart;
