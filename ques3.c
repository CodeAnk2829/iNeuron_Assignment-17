// Program to count vowels in a given string
#include <stdio.h>
int main(){
    // Declaring a string
    char str[100];

    // Declaring a vowel string containing the vowels
    char v[11] = "aeiouAEIOU";
    int i, j, count = 0;
    
    // Message for user
    printf("Enter a string: ");

    // Taking input for string
    gets(str);

    // Counting the vowels by comparing the given string and vowel string
    for(i = 0; str[i]; ++i){
        for(j = 0; v[j]; ++j){
            if(str[i] == v[j]){
                count++;
            }
        }
    }

    // Display the total no. of vowels
    printf("The total no. of vowels in a given string is %d", count);
    
    return 0;
}