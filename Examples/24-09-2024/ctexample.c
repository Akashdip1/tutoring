/* #include <cs50.h>
#include <ctype.h>
#include <stdio.h>


int main(void)
{

    
}
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Input: ");
    if (isalpha(c))
    {
        printf("Your input is alphabetical.\n");
    }
    else
    {
        printf("Your input is not alphabetical.\n");
    }
}

