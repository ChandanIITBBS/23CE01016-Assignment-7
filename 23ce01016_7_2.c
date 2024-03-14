#include<stdio.h>
#include<string.h>

int main(){
    char string[100], newstring[200];
    printf("Enter a string:");
    gets(string);
    int j=0;
    for (int i=0; i<strlen(string); i++){
        if (isalpha(string[i])!=0){
            newstring[j]=string[i];
            j++;
        }
    }
    printf("Alphabetical part in the string is: %s", newstring);

    return 0;
}
