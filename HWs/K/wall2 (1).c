#include <stdio.h>
#include <cs50.h>
    int main(void){
    const int n  = get_int("enter the number:");


       for(int row=1 ;row<=n;row++){
            for(int column = row;column<n;column++){
            printf(" ");
            }
            for(int column = 1;column<=row;column++){
                printf("#");
        }




        for(int column=n-1;column<n;column++){
          printf(" ");
        }
          for(int column=1;column<=row;column++){
            printf("#");
          }
           printf("\n");
        }
    }









