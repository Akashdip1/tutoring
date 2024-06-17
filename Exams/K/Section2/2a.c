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
    int ans = (arr[0]+arr[1]+arr[2]+arr[3]+arr[4])/5 ;
    return ans ;
}
