#include<stdio.h>
#include<string.h>

int main(){
    char string[100];
    printf("Enter a string:");
    gets(string);
    int length;
    for(length=1; string[length]!='\0'; length++);

    int a;
    for (int i=0; i<(length/2); i++){
        if (string[i]!=string[length-i-1]){
            a=1;
            break;
        }   
    }
    if (a!=1){
        printf("The string ( %s ) is a palindrome.", string);
    }
    else
        printf("The string ( %s ) is not a palindrome.", string);
    return 0;
}

