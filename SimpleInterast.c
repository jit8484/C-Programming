//how to calculating Simple Interest form user input
#include<stdio.h>
 int main(){
    float principal,rate,time,si;
    printf("Enter principal:");
    scanf("%f",&principal);
   printf("Enter Rate:");
    scanf("%f",&rate);
printf("Enter Time:");
    scanf("%f",&time);
    
    
    si=(principal*rate*time)/100;
    printf(" your simple interest is :%f\n",si);
    return 0;
    
    
 }