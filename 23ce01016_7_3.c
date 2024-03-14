#include<stdio.h>
#include<string.h>
void Reverse(char a[], int s, int l);

int main(){
    char string[100], newstring[100];
    printf("Enter a string: ");
    gets(string);
    int length=strlen(string);
    Reverse(string,0, length-1);
    printf("Reversed string: %s", string);

    return 0;
}

void Reverse(char a[], int s, int l){
    if (s >= l)
        return;
    int temp = a[s];
    a[s] = a[l];
    a[l] = temp;
    Reverse(a, s+1, l-1);

}
