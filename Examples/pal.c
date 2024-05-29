#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void){
    string s = "gcr";
    if (s[0] == s[2])
    {
        printf("%s is pallindrome\n",s );
    }
    else {
        printf("%s is not pallindrome\n", s);
    }
}
