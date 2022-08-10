// Program to count occurrence of a given character in a given string
#include <stdio.h>
int main(){
    // Declaration of variables
    char str[100], ch;
    int i, count = 0;

    // Message for user
    printf("Enter any character: ");
    scanf("%c", &ch); // Taking input for a character

    // Using the predefined function for clearing buffer
    fflush(stdin);

    printf("Enter a string: ");
    gets(str); // Taking input for string

    // Count the occurrence of given character
    for(i = 0; str[i]; ++i){
        if(str[i] == ch){
            count++;
        }
    }

    // Display the result
    printf("No. of %c in the given string is %d", ch, count);

    return 0;
}