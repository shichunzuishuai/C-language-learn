#include<stdio.h>
void PrintArray(int* form, int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%3d ", form[i]);
	}
	putchar('\n');
}
void PrintfYHplus(int n) {
	int form[20] = { 1 };
	int i, j;
	for (i = 0;i < n; i++) {
		for (j = i;j > 0; j--) {
			form[j] += form[j - 1];
		}
		PrintArray(form, i + 1);
	}
}
int main() {
	PrintfYHplus(10);
}