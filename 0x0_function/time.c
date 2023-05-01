#include <stdio.h>
/**
 * a function that prints the time table of 9 numbers
*/

void times_table(void);

int main(void){
    times_table();
    return 0;
}

void times_table(void){

    int i,j,d;

    for (i=0; i<=9; i++){
        printf("%d, ", 0);
        for (j=0; j<=9; j++){
            d = (i * j); 
            if ((d / 10) > 0)
            {
                printf("%d", d / 10);
            }
            else
            {
                printf(" ");
            }

            printf("%d", d % 10);   
            
            if (j < 9){
                printf(", ");
            }
        }
        printf("\n");
    }
}
