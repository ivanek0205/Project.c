#include <stdio.h>
#include <stdlib.h>
#define R 5
#define B 5
int main()
{
	int A[R][B];
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i == 0 || j == 0) {
				A[i][j] = 1;
			}
			else {
				A[i][j] = 0;
			}
			if (i % 4 == 0) {
				A[i][j] = 1;
			}
			else if (j % 4 == 0) {
				A[i][j] = 1;
			}
		}
	}
	printf("Square:\n");
	int number = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
		{
			printf("%d", A[i][j]);
			number++;
			if (number == 5)
			{
				printf("\n");
				number = 0;
			}
		}
	}
	return 0;
}
