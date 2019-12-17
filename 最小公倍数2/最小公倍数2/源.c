#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 0, b = 0;
	printf("请输入两个数:\n");
	scanf("%d%d", &a, &b);
	if (a > b) {
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	int i;
	for (i = 1;i <= a; i++) {
		if (b * i % a == 0) {
			printf("%d\n", b * i);
			break;
		}
	}
}