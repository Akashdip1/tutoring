#include <stdio.h>

const int N = 5; // Sample array size

int average_marks(int arr[N]);

int main(void)
{
    int arr[] = {4, 6, 7, 3, 0}; // Sample array
    int ans = average_marks(arr);
    printf("Ans: %i\n", ans);
}

int average_marks(int arr[N])
{
    int sum = 0;
    int length = sizeof arr[];
    for(int i=0;i<=length;i++)
        {
            sum = sum+arr[i];
        }
    return sum/N ;
}
