echo off
set tcpath="D:\ros_y_win\WindowsResearchKernel-WRK\tools\amd64"
del message.rc message.h esp.bin ntoskrnl.res
%tcpath%\mc -A -v message.mc
%tcpath%\rc /fo ntoskrnl.res ntoskrnl.rc
copy ntoskrnl.res ..\base\ntos\build\prebuilt\amd64\ntoskrnl.res
