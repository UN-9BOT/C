#include <stdio.h>

int main(void)
{
	float num1, num2;
	
	while (scanf("%f%f", &num1, &num2))
		printf("%.2f\n", (num1-num2)/(num1*num2));
	return (0);
}


