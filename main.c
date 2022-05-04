#pragma warning(disable : 4996)

#include <stdio.h>
#include "my_lab.h"
#include <stdlib.h>

int main() {
	int N;
	int len;
	printf("insert your number : ");
	scanf("%d", &N);

	printf("binary form of number - ");
	len = bin_len(N);


	printf("\nlength of longest row of ones - %d", len);

}
