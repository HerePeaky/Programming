@ECHO OFF 
SETLOCAL ENABLEDELAYEDEXPANSION
type NUL > out.txt

for /f "usebackq tokens=1,2 delims= " %%a in ("in.txt") do (
	echo %%b %%a >> out.txt
)
