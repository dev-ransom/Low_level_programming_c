#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98, followed by a new line
 * @n: number of parameter
 * return: Always 0 (Success)
*/

int main(void){
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}

void print_to_98(int n){
    int i;
    if (n<=98){
        for (i=n; i<98; i++){
            printf("%d, ", i);
        }
    }
    else {
        for (i=n; i>98; i--){
            printf("%d, ", i);
        }
    }
    printf("98\n");
    
}