#include<stdio.h>

int stuff(void)   //you don't need this in every file
{
     printf("Hello");
     return 1;
}

int main()
{
    stuff();
    printf("Hello there\n");

}