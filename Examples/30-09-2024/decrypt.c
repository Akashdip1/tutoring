#include <stdio.h>
#include <cs50.h>

int length(string s);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("No arguments were given.\n");
        return 1;
    }

    string input = argv[1];
    int strLength = length(input);
    for (int i = 0; i < strLength; i++)
    {
        input[i] = input[i] - 1;        
    }

    printf("%s\n", input);
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
