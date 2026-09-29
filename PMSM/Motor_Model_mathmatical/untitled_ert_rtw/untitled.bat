
cd .

if "%1"=="" ("C:\AHMEDY~1\adobe\matlab\bin\win64\gmake"  DEPRULES=1 -j7  -f untitled.mk all) else ("C:\AHMEDY~1\adobe\matlab\bin\win64\gmake"  DEPRULES=1 -j7  -f untitled.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1