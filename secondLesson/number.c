#include<stdio.h>

int stuff()
{
     printf("Hello\n");
     return 1;  //sends this to the other line of code
}

int main()
{
    stuff("Hello");
    printf("Hello there\n");

}