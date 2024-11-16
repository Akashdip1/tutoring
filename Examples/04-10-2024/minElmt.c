#include <stdio.h>
#include <cs50.h>
#include <math.h>

const int N = 5;

int maxElem(int arr[N]);

int main(void)
{
    int nums[N];

    for (int i = 0; i < N; i++)
    {
        nums[i] = get_int("Enter number: ");
    }
    
    int res = maxElem(nums);
    printf("%i\n",res);
}

int maxElem(int arr[N])
{
    int currMax = (int) INFINITY; // Current Max. number

    for (int i = 0; i < N; i++)
    {
        if (currMax > arr[i])
        {
            currMax = arr[i];
        }
    }
    return currMax;
}


