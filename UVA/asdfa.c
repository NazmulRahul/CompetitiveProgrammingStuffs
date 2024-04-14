#include <stdio.h>
int fun(int num) {
	int cnt = 0;
	while (num) {
		cnt++;
		num >>= 1;
	}
	return (cnt);
}
int main() {
	int x = fun(435);
	printf("%d\n", x );
}