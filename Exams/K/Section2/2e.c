#include <stdio.h>
#include <cs50.h>

int max_of_six(int a, int b, int c, int d, int e, int f);

int main(void)
{
    int a, b, c, d, e, f;

    a = get_int("a: ");
    b = get_int("b: ");
    c = get_int("c: ");
    d = get_int("d: ");
    e = get_int("e: ");
    f = get_int("f: ");

    int ans = max_of_six(a, b, c, d, e, f);

    printf("Ans: %i\n", ans);
}

int max_of_six(int a, int b, int c, int d, int e, int f)
{
    // Write your code here
}

