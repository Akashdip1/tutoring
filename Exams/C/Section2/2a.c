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

    printf("int max a, b, c, d, e, f %i\n", ans);
    return 0;
}

int max_of_six(int a, int b, int c, int d, int e, int f)
{
    int max = a;

     if(b > max)
     max = b;

     if(c > max)
     max = c;

     if(d > max)
     max = d;

     if(e > max)
     max = e;

     if(f > max)
     max = f;

     return max;

}

