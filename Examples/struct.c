#include <stdio.h>

typedef struct 
{
    char *name;
    char *number;
    int age;
    float mark;

}person;

int main(void){
    person chanchal;

    chanchal.name = "Chanchal Mandal";
    chanchal.number = "+91 0000000000";
    
    person kaushik;

    kaushik.name = "Kaushik Pradhan";
    kaushik.number = "+91 1234567890";

    printf("%s,\n%s\n",chanchal.name, kaushik.number);
}

