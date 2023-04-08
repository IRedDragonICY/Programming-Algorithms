   Public Sub isLeapYear(
          ?? Year)
    
      Dim Year

      If Year Mod 4 = 0 And year Mod 100 <> 0 Or Year Mod 400 = 0 Then
      Else
         MsgBox "bukan "
      End If
   
End Sub

   Public Sub outputYear(
          ?? Year)
    
      Dim Year

      MsgBox Year + " adalah "
      isLeapYear(Year)
      MsgBox "tahun kabisat."
   
End Sub

   Public Sub Main()

      Randomize

      Dim raptor_prompt_variable_zzyz As String
      Dim Year
      Dim isProgramRestart

      Do
         MsgBox "-== Tahun Kabisat Checker ==-"
         Do
            raptor_prompt_variable_zzyz = "Masukkan Tahun setelah 1582"
            Year = InputBox(raptor_prompt_variable_zzyz)
         Loop Until Year > 1582
         MsgBox Year + " adalah tahun sebelum 1582"
         outputYear(Year)
         Do
            raptor_prompt_variable_zzyz = "Apakah kamu ingin mengulang Program Tahun Kabisat Checker lagi? (Y/N)"
            isProgramRestart = InputBox(raptor_prompt_variable_zzyz)
         Loop Until isProgramRestart = "Y" Or isProgramRestart = "y" Or isProgramRestart = "N" Or isProgramRestart = "n"
         MsgBox "Masukkan input yang benar!"
      Loop Until isProgramRestart = "N" Or isProgramRestart = "n"
   
End Sub

