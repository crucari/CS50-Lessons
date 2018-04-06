#include<stdio.h>

int stuff()
{
     printf("Hello\n");
     return 1;  //sends this to the other line of code
}

int main(void)
{

    printf("Hello there\n");
    int integer = 5 + 8;
    // 001101 = 000101 + 000101
    printf("This is my number: %i\n", integer);
    //strings don't exist. Cancating does not exist in C
    float flt = 5.3 + 4.83;
    printf("This is my float: %.20f\n", flt);
}

//how to create a variable to store an interger