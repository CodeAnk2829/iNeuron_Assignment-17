// Program to sort a string in ascending order
#include <stdio.h>
int main(){
    // Declaration of variables
    char str[100], temp;
    int r, i, n;

    // Message for user
    printf("Enter a string: ");

    // Taking input for string
    gets(str);

    // Finding length of the string and will be storing in 'n'
    for (n = 0; str[n]; ++n);

    // Sorting the string in ascending order
    for(r = 1; r < n; ++r){
        for(i = 0; i < (n - r); ++i){
            if(str[i] > str[i + 1]){
                temp = str[i];
                str[i] = str[i + 1];
                str[i + 1] = temp;
            }
        }
    }   

    // Display the sorted string
    printf("%s", str);
    
    return 0;
}