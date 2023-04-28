#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit
 * return: the value of the last digit
*/

int main(void){
    int result = print_last_digit(689);
    result = print_last_digit(-987);
    
    return 0;
}

int print_last_digit(int nld){
    int pld = (nld % 10);

    if (pld < 0){
        pld = (-1 * pld);
    }
        printf("%d\n", pld);
        return pld;
}


