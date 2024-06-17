#include <stdio.h>

const int N = 5; 

int average_marks(int arr[N]);

int main(void)
{
    int arr[] = {4, 6, 7, 3, 0}; // Sample array
    int ans = average_marks(arr);
    printf("Ans: %i\n", ans);

    return 0;
}

int average_marks(int arr[N])
{
     int sum = 0;

    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }

    int average = sum / N;

    return average;
}
