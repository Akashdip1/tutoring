#include <stdio.h>
#include <cs50.h>

int length(string s);

int main(void)
{
    string s = get_string("Enter a string: ");
    
    for (int i = 0; i < length(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
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
