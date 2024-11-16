#include <stdio.h>
#include <cs50.h>

int main(void)
{
    const int N = 5;
    int nums[] = {1, 2, 3, 4, 5};

    /*for (int i = 0; i < N; i++)
    {
        nums[i] = get_int("Enter number: ");
    }*/
 
    // Soluiton
    
    int sum = 0;
    
    for (int i = 0; i < N; i++)
    {
        sum = sum + nums[i];        
    }

    printf("%i\n", sum);

}
