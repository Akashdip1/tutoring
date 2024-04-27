#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>


int main(void){
    string s = get_string("Enter string: ");// Input string from user
    //Turn every charachter uppercase  e.g. : hi --> HI, bye --> BYE
    int length = strlen(s);
    for (int i = 0; i < length; i++){
        s[i] = tolower(s[i]);
    }   
    printf("%s\n", s);
    
}
