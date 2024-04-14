#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define ll long long int
#define EOF -1

int main()
{
	double n;
	double i;
	while (scanf("%lf %lf", &n, &i) != EOF) {
		double k = pow(i, (1 / n));
		printf("%.0lf\n", k );
	}

	return 0;
}