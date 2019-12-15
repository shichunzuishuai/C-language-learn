#include<stdio.h>
#include<windows.h>
int fact(int n, int k) {
	if (k == 1) {
		return n;
	}
	return n * fact(n, k - 1);
}
int main() {
	int n = 0;
	int k = 0;
	int s = 0;
	printf("求n^k的值:\n");
	printf("请输入n的值:\n");
	scanf_s("%d", &n);
	printf("请输入k的值：\n");
	scanf_s("%d", &k);
	s = fact(n, k);
	printf("%d\n", s);
	return 0;
}