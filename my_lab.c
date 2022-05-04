#include "my_lab.h"


int bin_len(number) {
    int i = 0;
    int max = 0;
    int count = 0;


    for (int i = 6; i >= 0; i--) {
        printf("%d", (number >> i) & 1);

        if ((((number >> i) & 1) == 1) && (((number >> (i - 1)) & 1) == 1) && (((number >> (i - 2)) & 1) == 0)) {
            count++;
        }
    }
    printf("\namount of rows of ones(>1) - %d", count);

    while (number != 0)
    {
        if (number % 2) 
        {
            i++;
        }
        else i = 0; 

        if (i > max) 
        {
            max = i;
        }
        number = number / 2;
    }
    return max;
}
