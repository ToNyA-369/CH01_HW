#include <stdio.h>

int main()
{
	int N1, N2, N3, d;
	printf("Input three numbers : ");
	scanf("%d%d%d", &N1, &N2, &N3);
	if (N1 <= N2) { d = N1; N1 = N2; N2 = d; }
	if (N2 <= N3) { d = N2; N2 = N3; N3 = d; }
	if (N1 <= N2) { d = N1; N1 = N2; N2 = d; }
	printf("\nLargest  : %d", N1);
	printf("\nSmallest : %d\n", N3);
}
