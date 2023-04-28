#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 * 
 * return: x10 a-z
*/

void print_alphabet_x10(void);

int main(void){
    print_alphabet_x10();
    return 0;
}

void print_alphabet_x10(void){
    char a, b;
    for (a = 0; a <= 10; a++){
        for (b = 'a'; b <= 'z'; b++){
            fputchar(b);
        }
            fputchar('\n');
    }
}