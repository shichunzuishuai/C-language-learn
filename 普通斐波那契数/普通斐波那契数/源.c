#include<stdio.h>
#include<stdlib.h>
/*int Fib(n) {
	if (n <= 1) {
		return 1;
	}
	int last1 = 1;
	int last2 = 1;
	int i = 3;
	int cur = 0;
	for (i = 3;i <= n;i++) {
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	return cur;
}*/
int main() {
	int n;
	printf("ÇëÊäÈëÊý×Ö:\n");
	scanf_s("%d", &n);
	if (n <= 2) {
		printf("1");
	}
	int last1 = 1;
	int last2 = 1;
	int i = 3;
	int cur = 0;
	for (i = 3;i <= n;i++) {
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	printf("%d\n", cur);
	system("pause");
	return 0;
}