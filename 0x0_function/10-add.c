#include <stdio.h>
#include "main.h"

/**
 * add - a function that adds two integers and returns the result
 * @a: first number input
 * @b: second number input
 * Return: one + two
*/

int main(void){
    int sum;
    sum = add(45, 60);
    printf("%d", sum);
    return 0;
}

int add(int a, int b){
    int result;
    result = (a + b);
    return result;
}