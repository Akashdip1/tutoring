#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
    int a = get_int("enter the first number :");
    int b = get_int("enter the second number :");
    float c = get_float("enter the your first float :");
    float d = get_float("enter the your second float :");
    float ans = a+b+c+d;
    int ans2 = abs(a-b);
    float ans3 = fabsf(c-d);
    printf("the sum of all the number is %f\n",ans);
    printf("the gap between two integer is %i\n",ans2);
    printf("the gap between two float is %f\n",ans3);
}
