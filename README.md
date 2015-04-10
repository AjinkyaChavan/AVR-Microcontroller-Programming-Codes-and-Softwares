# AVR-Microcontroller-Programming-Codes-and-Softwares
AVR microcontroller programming with codes, datasheets, presentation and softwares


The default Makefile in this projects is for USBasp drivers and ATMEGA16 microcontroller, so incase you have a 
different model, change the Makefile accordingly.

Step 1 - Install WinAVR software from the softwares folder

Step 2 - Open "Programmers Notepad" from the WinAVR installation directory

Step 3 - Open a main.c file from any of the files in the codes folder

Step 4 - In Programmers notepad, go to Tools->Make All. This will compile the main file and check for errors
         If there are no errors, then it will return with exit code 0
         
Step 5 - In Programmers Notepad, go to Tools->Make Program. Make sure the USB programmer is connected to laptop or PC,
         and the drivers are installed. If everything is proper, the main file will be burnt into the microcontroller
