#include <stdio.h>
#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: input character
 * return: Returns 1 if c is a letter lowercase or uppercase, 0 otherwise
*/

int _isalpha(int c);

int main(){
    char c = 6;
    int result = _isalpha(c);
    if (result){
        printf("%c is a letter", c);
    }
    else {
        printf("%d is not a letter", c);
    }
}


int _isalpha(int c){
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){
        return 1;
    }
    else {
        return 0;
    } 
}