#include <stdio.h>
#include <math.h>

int main()
{
	float W, H, BMI;
	printf("Input your weight(kg) : "); scanf("%f", &W);
	printf("Input your height(cm) : "); scanf("%f", &H);
	BMI = W / (float)pow(H / 100.0, 2);
	printf("Your BMI : %.1f\nThis is ", BMI);
	if (BMI >= 30) printf("obese!!!\n");
	else if (BMI <= 29.9&&BMI >= 25) printf("overweight!\n");
	else if (BMI <= 24.9&&BMI >= 18.5) printf("normal\n");
	else printf("uderweight!\n");
}
