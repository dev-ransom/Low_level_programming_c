#include <stdio.h>
#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: input character
 * return: Returns 1 if c is lowercase, 0 otherwise
*/
int _islower(int c);

int main(void){
    char c = 'B';
    int result = _islower(c);
    if (result){
        printf("%c is a lowercase", c);
    }
    else {
        printf("%c is not lowercase", c);
    }
}

int _islower(int c){
    if (c >= 'a' && c <= 'z'){
        return 1;
    }
    else {
        return 0;
    }
}