#include <stdio.h>
#include <string.h>
#include <cs50.h>
   int main (void){
        string a = get_string("enter name: ");
        int length = strlen(a);


        if(length %2==0)
        printf("entered string is symmetrical\n");
        else
        printf("not symmetric\n");
      }
