// Program to convert a given string into lowercase string
#include <stdio.h>
int main()
{
    // Declaration of variables
    char str[100];
    int i;

    // Message for the user
    printf("Enter a string: ");

    // Taking input for string
    gets(str);

    // Converting the given string into lowercase string
    for (i = 0; str[i]; ++i)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }

    // Display lowercase string
    printf("%s", str);

    return 0;
}