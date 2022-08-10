// Program in C to count the total number of alphabets, digits and special characters in a string.
#include <stdio.h>
int main(){
    // Declaration of variables
    char str[100];
    int i, count_alphabet = 0, count_char = 0, count_digit = 0;

    // Message for user
    printf("Enter a string: ");

    // Taking input for string
    gets(str);

    // Counting the no. of alphabets, digits and special characters
    for(i = 0; str[i]; ++i)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            count_alphabet++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            count_digit++;
        }
        else
        {
            count_char++;
        }
    }

    // Display the values
    printf("No. of alphabets: %d\n", count_alphabet);
    printf("No. of digits: %d\n", count_digit);
    printf("No. of special characters: %d", count_char);
    
    return 0;
}