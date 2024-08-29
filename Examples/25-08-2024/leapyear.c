// year = number
// if number / 4 == 0 then leap year
// if number / 100 == 0 then year is end of century 
// if year is end of century then it should be divisible by 400


#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int year = get_int("Year: ");
    // check if end of century

    // if year is not the end of century and it is divisible by 4 then leap year
    if (year % 100 != 0 && year % 4 == 0)  // or symbol = '||' 
    {
        printf("The year %i is a leap year.", year);
    }
    // if year is end of century and it is diveisible by 400 then leap year
    else if (year % 100 == 0 && year % 400 == 0)
    {
        printf("The year %i is a leap year.", year);
    }
    else
    {
        printf("The year %i is not a leap year.", year);
    }

}
