# registry

### Just execute the files :p, or do manualy these things

## Win32PrioritySeparation

#### My recomendation is 2a (hex), but here the values if you need other

* ##### 2A Hex = Short, Fixed , High foreground boost.
* ##### 29 Hex = Short, Fixed , Medium foreground boost.
* ##### 28 Hex = Short, Fixed , No foreground boost.

* ##### 26 Hex = Short, Variable , High foreground boost.
* ##### 25 Hex = Short, Variable , Medium foreground boost.
* ##### 24 Hex = Short, Variable , No foreground boost.

* ##### 1A Hex = Long, Fixed, High foreground boost.
* ##### 19 Hex = Long, Fixed, Medium foreground boost.
* ##### 18 Hex = Long, Fixed, No foreground boost.

* ##### 16 Hex = Long, Variable, High foreground boost.
* ##### 15 Hex = Long, Variable, Medium foreground boost.
* ##### 14 Hex = Long, Variable, No foreground boost.


## Set priority to some programs

#### In the registry you can change the priority of a program, just copy the code, replace the * * with your values, create a .reg, and execute it

##### values of CpuPriorityClass:

* ###### high:00000003
* ###### abovenormal:00000006
* ###### normal:00000002
* ###### belownormal:00000005
* ###### low:00000001

### CODE:
```r
Windows Registry Editor Version 5.00

[HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Image File Execution Options\*program executable file*\PerfOptions]
"CpuPriorityClass"=dword:*value*
```

