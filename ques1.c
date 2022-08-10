// Program to calculate the length of a string without using inbuilt function
#include <stdio.h>
int main(){
    // Declaration of variables 
    char str[100];
    int i;

    // Message for user
    printf("Enter a string: ");

    // Taking input for string 
    gets(str);

    // Finding length
    for(i = 0; str[i]; ++i);

    // Display length of the given string
    printf("The length of the given string is %d", i);
    
    return 0;
}