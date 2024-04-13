#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void){
    int a = get_int ("enter the number");

    int sum=a*(a+1)/2;

    printf("the sum is %i\n",sum);


}
