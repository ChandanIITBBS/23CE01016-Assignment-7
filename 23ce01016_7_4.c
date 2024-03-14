#include<stdio.h>
#include<string.h>
char Largest(char a[], int s, int n);

int main(){
    char string[100];
    printf("Enter a string:");
    gets(string);
    int length=strlen(string);
    printf("Largest character in the string is: %c\n", Largest(string, 0, length));
    return 0;
}

char Largest(char a[], int s, int n){
    if (s>=n){
        return a[s-1];
    }
    char largest = Largest(a, s+1, n);
    if (a[s]>largest){
        largest = a[s];
        }
    return largest;
}