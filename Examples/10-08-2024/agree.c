#include <stdio.h> // printf
#include <cs50.h> // get_char


int main(void)
{
    // Prompt the user for agreement
    //int x = get_int("Value of x: ") 
    char c = get_char("Do you agree?: "); // y/n ---> c  // == / =
    // Check the user input
    if (c == 'y' || c == 'Y')    // '|' and '||' => or    // for string -> "your string" // 
    {
        printf("Agreed.\n"); // y
    }
    else
    {
        printf("Not Agreed.\n"); // n
    }
}

// 'y' is different than 'Y'. 



