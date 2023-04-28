#include <stdio.h>
#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @ab: input integer 
 * return: ab
*/



int _abs(int);

int main(void){
    int result = _abs(-78);
    printf("%d\n", result);
    return 0;
}

int _abs(int ab){
    if (ab < 0){
        ab = (ab  * -1);
    }
    return ab;
}
