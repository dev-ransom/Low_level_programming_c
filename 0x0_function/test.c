#include <stdio.h>
void times_table(void);

int main(){
    times_table();
    return 0;
}

void times_table(void)
{
    int rone, cone, d;

    for (rone = 0; rone <= 9; rone++)
    {
        printf("%d, ", 0);
        for (cone = 1; cone <= 9; cone++)
        {
            d = (rone * cone);
            if ((d / 10) > 0)
            {
                printf("%d", d / 10);
            }
            else
            {
                printf(" ");
            }
            printf("%d", d % 10);

            if (cone < 9)
            {
                printf(", ");
            }
        }
        printf("\n");
    }
}
