#include<stdio.h>
#include<stdlib.h>
int Fib(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 1;
	}
	return Fib(n - 1) + Fib(n - 2);
}
int main() {
	int k = 0;
	printf("求第几个数:");
	scanf_s("%d", &k);
	int ret = Fib(k);
	printf("%d\n", ret);
	system("pause");
	return 0;
}