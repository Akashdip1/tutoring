#include <stdio.h>
#include <cs50.h>

int max_of_four(int a,int b,int c,int d);
int main()
{
    int a = get_int("enter the first number :");
    int b = get_int("enter the second number :");
    int c = get_int("enter the third number :");
    int d = get_int("enter the last number :");
    int ans = max_of_four(a,b,c,d);
    printf("%i\n",ans);

}

int max_of_four(int a,int b,int c,int d)
{
    int x;
    int y;
    int z=0;

    if(a>b)
    {
        x=a;
    } else
    {
        x=b;
    }
    if(x>c)
    {
        y=x;
    } else
    {
        y=c;
    }
    if(y>c)
    {
       y=z;

    } else
    {
        z=c;
    }
    if(z>d)
    {
        return z;
    }else
    {
        return d;
    }
}
