//how to calculating percentage of 5 subjects
#include<stdio.h>
int main(){

    float  English=90;
    float hindi=90;
    float mathematics=60;
    float science=60;
    float socialscience=50;

    float percent=( English+ hindi+ mathematics + science + socialscience )/5;
    printf("percentage of 5 subject is : %f", percent);
    return 0;

}