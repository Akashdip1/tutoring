#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int length = get_int("Length: ");
    int breadth = get_int("Breadth: ");

    // Area

    int area = length * breadth;

    // Perimeter

    int per = 2 * (length + breadth);
    
    printf("Area: %i \nPerimeter: %i\n", area, per);

}
