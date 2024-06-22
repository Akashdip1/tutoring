#include <stdio.h>


int main(void)
{
    char* s = "HI!";   // char can only store 1 char
    printf("%c\n",* s); // Pointer to the first charachter
    printf("%c\n",*(s+1));
    printf("%c\n",*(s+2));
    printf("%c\n",*(s+3));
    printf("%c\n",*(s+4));
    printf("%c\n",*(s+5));
    printf("%i\n",*(s+10000));


}
