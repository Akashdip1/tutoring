#include <stdio.h>

const int N = 5;

void revArr(int arr[N]);

int main(void)
{
    int nums[] = {1, 2, 3, 4, 5};
    revArr(nums);

    for (int i = 0; i < N; i++)
    {
        printf("%i\n", nums[i]);
    }
}

void revArr(int arr[N])
{
    int temp; // temporary var 
    for (int i = 0; i < N/2; i++)
    {
        temp = arr[i];  // 1        
        arr[i] = arr[N-1-i];
        arr[N-1-i] = temp;     // arr[0] = arr[3] and arr[3] = arr[0]
    }
}

