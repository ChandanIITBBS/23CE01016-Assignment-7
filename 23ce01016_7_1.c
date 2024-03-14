#include<stdio.h>
#include<string.h>

int main(){
    char string[100], character;
    printf("Enter a string:");
    gets(string);
    printf("Enter a character : ");
    scanf("%c",&character);
    int frequency=0;
    for (int i=0; i<strlen(string); i++){
        if (string[i]==character){
            frequency++;
        }
    }
    printf("Frequency of %c in the string is: %d",character, frequency);

    return 0;
}
