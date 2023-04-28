#include <stdio.h>
#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: number input
 * return: 1 prints '+' if n > 0, 0 prints '0' if n = 0, -1 prints '-' if n < 0
*/

int print_sign(int n);

int main(void){
    int result = print_sign(98);
    result = print_sign(0);
    result = print_sign(0xff);
    result = print_sign(-1);
    return 0;
}

int print_sign(int n){
    if (n > 0){
        printf("+, 1\n");
        return 1;
    }
    else if (n == 0){
        printf("0, 0\n");
        return 0;
    }
    else {
        printf("-, /\n");
        return -1;
    }
}