#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main ()
{
    string ch = get_string("enter a character :");
    string s = get_string("enter a word :");
    string sen = get_string("write a sentence :");
    printf("%s\n%s\n%s\n",ch,s,sen);

}
