#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cnt;
void fun(int n) {
	if (n == 1)return;
	else if (n % 2 == 0) {
		cnt++;
		fun(n / 2);
	}
	else {
		cnt++;
		fun(3 * n + 1);
	}
}

int main()
{
	int i, j;
	while (scanf("%d %d", &i, &j) != EOF) {
		int count = 0;

		if (i == 0)break;

		int ans = i;
		int n;
		for (n = i; n <= j; n++ ) {
			fun(n);


			if (cnt > count) {
				count = cnt;
				ans = n;
			}
			cnt = 0;

		}
		printf("Between %d and %d, %d generates the longest sequence of %d values.\n", i, j, ans, count );

	}

	return 0;
}
