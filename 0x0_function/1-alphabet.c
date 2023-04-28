#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase, followed by a new line
 * 
 * return: void
*/

void print_alphabet(void);

int main(void){
    print_alphabet();
    return 0;
}

void print_alphabet(void){
    char a;
    for (a = 'a'; a <= 'z'; a++){
        fputchar(a);
        fputchar('\n');
    }
}