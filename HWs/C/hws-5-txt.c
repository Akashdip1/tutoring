#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
 char str[100];

    string start= get_string("enter the string :");
     strcpy(str, start);
      int start_index = 0;
      int end_index = strlen(str) - 1;
      while(start_index < end_index){
        if(str[start_index] != str[end_index]){
       printf("%s is not a palindrome.\n",str);
       return 0;
      }
      start_index++;
      end_index--;
     }
     printf("%s is a palindrome.\n",str);
     return 0;
    }
