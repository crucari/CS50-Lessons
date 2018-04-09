#include <stdio.h>

int main(void)
{
    int character = 112;
    printf("%c\n", character);
    printf("%c\n", 97);  //been set to an integer instead of a character
    printf("%c\t%c\n", 17 + 'a', 'p' + 4);
    printf("%lu\t%lu\n", sizeof(int), sizeof(char));

}


//characters are treated identical to integers