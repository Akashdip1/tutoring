#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
 char str[100];

    string srart= get_string("enter the string :");
      int start = 0;
      int end = strlen(str) - 1;
      while(start < end){
        if(str[start] != str[end]){
            printf("%s is not palindrome.\n",str);
      start++;
      end--;
      }
        printf("%s is palindrome.\n",str);
      }
     }
    
