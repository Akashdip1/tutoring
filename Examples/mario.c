/* 
    # 
   ##
  ###
 ####
#####
Mario More 
*/

#include <stdio.h>
#include <cs50.h>

int main(void){
    int n = get_int("Number: ");
    for (int i = 1; i <= n; i++){
        for (int j = n; j >= 1; j--){
            if (j <= i){
                printf("#");
            }
            else{
                printf(" ");
            }
        }
        printf("  ");
        for (int j = 1; j <= n; j++){
            if (j <= i){
                printf("#");
            }
            else{
                printf(" ");
            }

        }
        printf("\n");
    }
}
