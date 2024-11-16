#include <cs50.h>
#include <stdio.h>

const int N = 5; // Length of an array

void rotate(int arr[N], int k); 

int main(void)
{
    int nums[] = {1, 2, 3, 4, 5};
    int rotation = get_int("Enter a number: "); // 2 , 1 = 6 = 11 ; 12 % 5 = 2
    rotate(nums, rotation);  

    for (int i = 0; i < N; i++)
    {
        printf("%i\n", nums[i]);
    }
}

void rotate(int arr[N], int k) // k -> number of rotation
{
    k = k % N; // Because we require remainder
    int temp[N];

    // To copy the last k elements 
    for (int i = N-k; i < N; i++) // k = 3
    {
        temp[i-(N-k)] = arr[i];
    }
    // To copy first elements till N-k position
    for (int i = 0; i < N-k; i++)
    {
        temp[i+k] = arr[i];
    }
    // To change the orighinal array
    for (int i = 0; i < N; i++)
    {
        arr[i] = temp[i];
    } 
}
