#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int nums[] = {5, 3, 6, 2, 0};
    int number = get_int("Enter the number to be searched ");

    for (int i = 0; i < 5; i++)
    {
        if (number == nums[i])
        {
            printf("Number is in the array.\n");
            return 0;
        }
    }
    printf("Number is not in the array.\n");
    return 1;
}
