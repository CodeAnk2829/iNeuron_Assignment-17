// Program to reverse a string
#include <stdio.h>
int main(){
    // Declaration of variables
    char str[100], temp;
    int i, n;

    // Message for user
    printf("Enter a string: ");

    // Taking input for string
    gets(str);

    // Finding length of the string and will be storing in 'n'
    for(n = 0; str[n]; ++n);

    // Reversing the given string 
    for(i = 0; i < n/2; ++i){
        temp = str[i];
        str[i] = str[n-1-i];
        str[n-1-i] = temp;
    }

    // Display the reversed string
    printf("%s", str);
    
    return 0;
}