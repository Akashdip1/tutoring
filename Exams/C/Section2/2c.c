#include <stdio.h>

void desc_arr(int arr[5],int size);

int main(void)
{
    int arr[5] = {4, 5, 2, 1, 3} // Example array
    desc_arr(arr,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");

    return 0;
}

void desc_arr(int arr[5], int size)
{
    for (int i = 0; i < size - 1; i++)
{
    for (int j = 0; j < size - i - 1; j++)
    {
        if (arr[j] < arr[j + 1])
        {
            int str = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = str;
        }
    }
}
}


