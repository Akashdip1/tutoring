#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

string reverse_case(string s);

int main(void)
{
    string s = get_string("s: ");
    printf("Ans: %s",reverse_case(s));
}

string reverse_case(string s)
{
    int n = strlen(s);
    for(int i = 0;i<n;i++)
        {
            if(isupper(s[i]))
            {
                s[i] = tolower(s[i]);
            }
            else if (islower(s[i))
            {
                s[i] = toupper(s[i];
            }
     }
return s;
}


