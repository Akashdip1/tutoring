#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]){
    if (argc != 2)
    {
        printf("Incorrect usage.\n");
        return 100;
    }
    else 
    {      
        printf("Hello, %s\n", argv[1]); 
        return 0;
    }
}

