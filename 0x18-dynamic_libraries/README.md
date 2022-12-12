#	Dynamic library
- Creating dynamic libraries
- exporting path for library
- compiliation and usage

## Steps
```c
gcc -c -fPIC *.c
gcc -shared -o libname.so *.o
```
