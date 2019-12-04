#include<stdio.h>
void form(int n) {
	int arr[20][20] = { 1 };
	int i, j;
	for (i = 0; i < n; i++) {
		arr[i][0] = 1;
		for (j = 1;j <= i; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0;j <= i; j++) {
			printf("%3d ", arr[i][j]);
		}
		putchar('\n');
	}
}
int main() {
	form(10);
}