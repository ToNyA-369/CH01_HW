#include <stdio.h>
#include <math.h>

int main()
{
	printf("Num\tSqr\tCub\n");
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 3; j++) printf("%d\t", (int)pow(i, j));
		printf("\n");
	}
}
