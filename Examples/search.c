#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct{         // person data type creation
                        // int, string, float... person(name, number)
    string name;
    string number;      // contact -- data type
}contact;

int main(void){
    contact people[3];
    
    people[0].name = "Chanchal";
    people[0].number = "+91-000-000-0000";

    people[1].name = "Kaushik";
    people[1].number = "+91-123-456-7890";

    people[2].name = "Obama";
    people[2].number = "+1-000-000-0000";

    
    string val = get_string("Enter word: ");

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(val, people[i].name) == 0)
        {
            printf("Found!\n");
            printf("%s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found.\n");
    return 1;
}
