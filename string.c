// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    char ch[100];
    int l,i;
    
    printf("Enter a string :");
    scanf("%s",ch);
    
    int length=strlen(ch);
    
    char t=ch[0];
    ch[0]=ch[length-1];
    ch[length-1]=t;
    printf("%s",ch);

    return 0;
}