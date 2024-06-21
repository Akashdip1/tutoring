#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch[100];
    printf("word =");
    scanf("%s",ch);

    int l = strlen(ch);

    printf("original word = %s \n",ch);

    for(int i = 0;i < l;i++)
    {
        if(ch[i] >= 65 && ch[i] <= 90)
        ch[i] = ch[i] + 3;
        else if(ch[i] >= 97 && ch[i] <=122)
        ch[i] = ch[i] + 4;
    }
    printf("key word = %s \n",ch);

    return 0;
}

