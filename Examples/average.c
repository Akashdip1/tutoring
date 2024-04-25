#include <cs50.h>
#include <stdio.h>

float average(int array[]);

int main(void){
    int scores[4]; 
    
    for (int i = 0; i < 4; i++){
        scores[i] = get_int("Score%i: ", i+1);
    }
    float av_score = average(scores);
    printf("Average: %f", av_score);

}

// average --> float 
float average(int array[])
{
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum = sum + array[i];      // i = 0, sum = 0 + 72; i = 1, sum = 72 + 73 ; i = 2, sum = 145 + 33
    }
    float av = sum/4.0;

    return av;
}
