#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    char *s = get_string("s: "); // hi! - address  

    char *t = malloc(strlen(s) + 1); // allocates space for you in bytes else return NULL
    
   // NUL - \0, NULL = 0x00000000
    strcpy(t, s);

    t[0] = toupper(t[0]);

    printf("%s\n", s); // print s
    printf("%s\n", t); // print t
    
    free(t); // frees the space allocated to you

    return 0;


}
