#include <stdio.h>

int main()
{
	int N1, N2;
	printf("Input two number : ");
	scanf("%d%d", &N1, &N2);
	if (N1%N2 == 0) printf("They are multiple relation\n");
	else printf("They are not multiple relation\n");
}
