#include <stdio.h>

double min(double x, double y);
int main(void) {
	double x, y;
	scanf("%lf%lf", &x, &y);
	printf("\n%lf\n", min(x, y));
	return (0);
}

double min(double x, double y) {
	return ((x < y) ? x: y);
}
