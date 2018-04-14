#include<cs50.h>
#include<stdio.h>
#include<string.h>    //usually these are put in alphabetical order

int main(int argc, char *argv[])
    {
        if (argc !=2) //if argc is not equal to 2
             {
                printf("Usage: strings \"phase\"\n");
                exit(1);  //return 0 or 1 is another way
             }
        // printf("%i\n", argc);
        // int length = strlen(argv[1]);
        // printf("%i\n", length);

        for(int i = 0, length = strlen(argv[1]); i < length; i++)

        {
             if (argv[1][i] != ' ')
            {
             printf("the ascii value at pos %i: %i\n", i, argv[1][i]);
            }
        }
    }


//make strings
//./strings "Hello World"
//Prints 2. 11. and ./strings