// Program to find the frequency of each characters
#include <stdio.h>
int main(){
    // Declaration of variables
    char str[100], temp;
    int i, j, k, n, count;

    // Message for user
    printf("Enter a string: ");

    // Taking input for string
    gets(str);

    // Finding length of the string and will be storing in 'n'
    for (n = 0; str[n]; ++n);

    // Calculating the frequency of each characters
    for(i = 0; str[i]; ++i){
        for(j = 0; j < i; ++j){
            if(str[j] == str[i]){
                break;
            }
        }
        if(j == i){
            count = 1;
            for(k = i + 1; k < n; ++k){
                if(str[k] == str[i]){
                    count++;
                }
            }

            // Display the frequency
            printf("Frequency of %c: %d\n", str[i], count);
        }
    }

    return 0;
}