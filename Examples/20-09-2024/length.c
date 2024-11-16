#include <stdio.h>
#include <cs50.h>

int length(string s);


int main(void)
{
    string s = get_string("Enter a string: ");
    string t = get_string("Enter the second string: ");
    printf("%i\n", length(s)); 
    printf("%i\n", length(t)); 
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
