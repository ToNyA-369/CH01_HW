#include <stdio.h>

int main()
{
	int Num;
	printf("Input the number : ");
	scanf("%d", &Num);
	if (Num % 2 == 0) printf("\nEven!\n");
	else printf("\nOdd!\n");
}
