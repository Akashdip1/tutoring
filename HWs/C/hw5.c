#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void)
{
    string a = get_string("name =");
    int leanth = strlen (a);
    if(leanth %2==0){
    printf("entered string is symmetric");
}else{
    printf("entered string is not symetric");
}
}
