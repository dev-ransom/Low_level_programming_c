#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * h = hour, m = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
*/

int main(void){
    jack_bauer();
    return 0;
}

void jack_bauer(void){
    int i, j;
    for (i = 0; i < 24; i++){
        for (j = 0; j < 60; j++){
            printf("%02d:%02d\n",i ,j);
        }
    
    }
}