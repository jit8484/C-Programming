/// finding the area of circle in user input 
#include <stdio.h>

int main() {

    
    float radius;
    printf("Enter radius:");
    scanf("%f",&radius);
    float pi=3.1415;
    float area=pi*radius*radius;
    printf("The area of circle is:%f\n",area);

    return 0;

}
