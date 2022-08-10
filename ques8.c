// Program in C to copy one string to another string
#include <stdio.h>
int main(){
    // Declaration of variables
    char str[100], s[100];
    int i;

    // Message for user
    printf("Enter a string: ");

    // Taking input for string str
    gets(str);

    // Copying the given string into another string
    for(i = 0; str[i]; ++i){
        s[i] = str[i];
    }
    s[i] = 0;

    // Display the new copied string with the original string
    printf("%s %s", s, str);
    
    return 0;
}