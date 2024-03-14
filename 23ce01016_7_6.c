#include<stdio.h>
#include<string.h>

int main(){
    char string[100], substring[100];
    printf("Enter a string:");
    gets(string);
    printf("Enter the substring to be searched:");
    gets(substring);
    int length1=strlen(string);
    int length2=strlen(substring);

    int a=0;
    for (int i=0; i<length1; i++){
        if (string[i]==substring[0]){
            for (int j=0; j<length2; j++){
                if (substring[j]==string[i+j]){
                    if((substring[j+1]=='\0')){
                        a=1;
                        break;
                    }
                }
                else{
                    break;
                }
            }
            if (a != 0)
                break;
        }
    }
    if(a!=0){
        printf("The substring exists in the string.\n");
    }
    else{
        printf("The substring does not exist in the string.\n");
    }
    return 0;
}