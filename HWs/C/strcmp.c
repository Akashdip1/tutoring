#include <stdio.h>
#include <cs50.h>
#include <string.h>

def compare(string s, string t);

typedef struct{         // person data type creation
                        // int, string, float... person(name, number)
    string name;
    string price;      // contact -- data type
}sale;

int main(void){
    sale products[5];

    products[0].name = "HP LAPTOP";
    products[0].price = "30,000";

    products[1].name = "ASUS LAPTOP";
    products[1].price = "40,000";

    products[2].name = "SAMSUNG A34";
    products[2].price = "32,000";

    products[3].name = "REDMI NOTE 13 PRO +";
    products[3].price = "31,000";

    products[4].name = "XIAOMI 11X PRO 5G";
    products[4].name = "42,000";

    string val = get_string("Enter the product name : ");

    for (int i = 0; i < 5; i++)
    {
       if(compare(val, products[i].name) == 0)
        {
            printf("Found!\n");
            return 0;
        }
    }
    printf("Not Found.\n");
    return 1;
}

def compare(string s, string t)   // if s == t ?
{   
    if (strlen(s) != strlen(t))   // dog doger  ; for (int i = 0; i < 5, i++) ; n = strlen(s)
                                    //              {
                                    //                  if (s[i] != t[i]) --> return 1 (outside for loop                                    //                                                        return 0)
                                    //              }
    {
        return 1;
    }

    return 0;
}
