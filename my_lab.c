#include "my_lab.h"



int bin_len(number) {
    int i = 0;
    int max = 0;
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