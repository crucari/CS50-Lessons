#include<cs50.h>
#include<stdio.h>
#include<string.h>    //usually these are put in alphabetical order

int main(int argc, char *argv[])
    {
        printf("%i\n", argc);
        int length = strlen(argv[1]);
        printf("%i\t%s\n", length, argv[0]);
    }


//make strings
//./strings "Hello World"
//Prints 2. 11. and ./strings