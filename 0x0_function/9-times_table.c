#include <stdio.h>
#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0.
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
*/

int main(void){
    times_table();
    return 0;
}

void times_table(void){
    int i,j;
    for (i=0; i<=9; i++){
        for (j=0; j<=9; j++){
            printf("%d", j * i);
            }
        printf("\n");
        }
        
    }

