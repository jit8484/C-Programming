 // This program demonstrates the use of a do-while loop in C to print numbers from 1 to 10.


#include<stdio.h>
int main() {
    int i = 10;
    // Using a while loop to print numbers from 1 to 10
    // while (i <= 10) {
    //     printf("%d ", i);
    //     i++;
    // }

    // Using a do-while loop to print numbers from 1 to 10
    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);
    return 0;
}