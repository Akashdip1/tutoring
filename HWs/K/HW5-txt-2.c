#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start, end;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    start = 0;
    end = strlen(str) - 2;  // Subtract 2 to avoid '\n' from fgets() and '\0'

    while(start < end) {
        if(str[start] != str[end]) {
            printf("%s is not a Palindrome.\n", str);
            return 0;
        }
        start++;
        end--;
    }

    printf("%s is a Palindrome.\n", str);
    return 0;
}
