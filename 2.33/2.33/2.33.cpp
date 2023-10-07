#include <stdio.h>

int main()
{
	float M, GC, GM, P, T, Total;
	printf("Total miles driven per day : ");   scanf("%f", &M);
	printf("Cost per gallon of gasonline : "); scanf("%f", &GC);
	printf("Average miles per gallon : ");     scanf("%f", &GM);
	printf("Parking fees per day : ");         scanf("%f", &P);
	printf("Tolls per day : ");                scanf("%f", &T);
	Total = GC * (M / GM) + P + T; printf("Total : %.1f", Total);
}
