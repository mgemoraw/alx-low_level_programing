# Dynamic Link Libraries in Linux
## Commands to ceate a dynamic library
- first create object files using ``` gcc -c *.c -fpic ```
- then create a dynamic link library using ```gcc *.o -shared -o libdynamic.so ```
- then export the current path or inlcude ``` libdynamic.so ``` in the root folder 
- ``` export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH```
- create an executable file ```gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len ```
- check the files linked to the library using ```ldd len ```
- done!
