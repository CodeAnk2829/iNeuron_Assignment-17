// Program to convert a given string into uppercase string
#include <stdio.h>
int main(){
    // Declaration of variables
    char str[100];
    int i;

    // Message for the user
    printf("Enter a string: ");

    // Taking input for string
    gets(str);

    // Converting the given string into uppercase string
    for(i = 0; str[i]; ++i){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] -= 32;
        }
    }

    // Display uppercase string
    printf("%s", str);

    return 0;
}