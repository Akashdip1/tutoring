#include <cs50.h>
#include <stdio.h>

int fib(int x);

int main(void)
{
    int n = get_int("Term number: ");
    int answer = fib(n);
    printf("%i\n", answer);

}


// calculate xth fibonacci number
int fib(int x)
{
    int first = 0; // first Term
    int second = 1; // second term
    

    // deals with first two terms 
    if (x == 1) // first term
    {
        return 0; 
    }
    else if (x == 2) // second term
    {
        return 1;
    }
    
    int ans; // stores answer

    while(x > 2) // 4
    {
        ans = first + second; // 3rd = 1 4th? second + third
        first = second; 
        second = ans;
        x--;
         
    } 
    return ans;
}
