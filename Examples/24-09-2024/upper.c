#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int length(string s);

int main(void)
{
    string s = get_string("Enter a string: ");
    
    for (int i = 0; i < length(s); i++)
    {
        s[i] = toupper(s[i]);
    }

    printf("After: %s\n", s);
}

int length(string s)
{
    int i = 0;

    while (s[i] > 0)
    {
        i++;
    }
    return i;
}

