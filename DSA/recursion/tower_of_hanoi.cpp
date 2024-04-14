#include <iostream>//watch geeksforgeeks video to understand;
int cnt;
void TowerOfHanoi(int n, char A, char C, char B) {
	if (n == 0)
		return;
	TowerOfHanoi(n - 1, A, B, C);
	printf("#%d: move %d from %c to %c\n", ++cnt, n, A, C);
	TowerOfHanoi(n - 1, B, C, A);
}
int main() {
	int n;
	scanf("%d", &n);
	TowerOfHanoi(n, 'A', 'C', 'B');
}