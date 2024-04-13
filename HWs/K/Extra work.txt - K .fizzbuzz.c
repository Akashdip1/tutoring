#include <cs50.h>
#include <stdio.h>
#include <math.h>
 int main(void){
    int number = get_int("What is the number?");

    if(number%2 == 0)
    {
      printf("fizz\n");
    }
    else if(number%3 == 0)
   {
      printf("buzz\n");
   }
 }





