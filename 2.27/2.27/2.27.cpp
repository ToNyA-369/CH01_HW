#include <stdio.h>

int main()
{
	for (int i = 5; i > 0; i--)
	{
		for (int j = i; j > 1; j--) printf(" ");
		for (int j = 11-i*2; j > 0; j--) printf("*");
		printf("\n");
	}
}