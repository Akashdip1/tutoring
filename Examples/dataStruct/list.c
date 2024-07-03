#include <stdio.h>
#include <stdlib.h>


// Defining node data structure
typedef struct node
{
    int number;
    struct node *next;
}node;

int main(int argc, char *argv[])
{
    //create a list pointer who will point to the first node
    node *list;
    list = NULL;
    
    //add command line argument numbers to list
    for (int i = 1; i < argc; i++)
    {
        // Convert string to int
        int number = atoi(argv[i]);   // string 1 2 3 -> int 1 2 3

        // Allocate a new node with a temp pointer
        node *n = malloc(sizeof(node));
        
        n->number = number;
        n->next = NULL;

        // Prepend node to the list
        n->next = list;
        list = n;
    }

    //Print numbers
    node *ptr = list;

    //Follow the pointers
    while(ptr != NULL)
    {
        printf("%i\n",ptr->number);
        ptr = ptr->next;
    }

    // Free memory
    ptr = list;
    while(ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;

    }

}

