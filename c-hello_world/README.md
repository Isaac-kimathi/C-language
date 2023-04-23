0-preprocessor: script that runs a C file through the preprocessor and saves the result into another file. The C file name is saved in the variable . The output is saved in the file c.
1-compiler: The script compiles a C file but does not link. The C file name is saved in the variable . The output file is named the same as the C file, but with the extension .o instead of .c
2-assembler: script generating the assembly code of a C code and saving it in an output file. The C file is saved in the variable $CFILE. The output file is named the same as the C file, but with the extension .s instead of .c.
3-name:  script that compiles a C file and creates an executable named cisfun. The C file name will be saved in the variable $CFILE.
4-puts.c: C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line. Use of the function puts, not allowed to use printf, the program ends with the value 0. 
5-printf.c: C program that prints exactly with proper grammar, but the outcome is a piece of art, followed by a new line. Use of function printf, no use the function puts, the program returns 0, the program compiles without warning when using the -Wall gcc option 
6-size.c: C program that prints the size of various types on the computer it is compiled and run on. The program returns 0. Warnings are allowed.  You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option

