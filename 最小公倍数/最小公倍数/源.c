#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i, j, a = 0, b = 0, c = 0;
	int k, m;
	printf("请输入A,B:\n");
	scanf("%d%d", &a, &b);
	if (a < b) {
		int temp;
		temp = a;
		a = b;
		b = temp;
		k = a;
		m = b;
	}
	k = a;
	m = b;
	for (i = 1; i < 100;i++) {
		a *= i;
		for (j = 1;j < 100;j++) {
			b *= j;
			if (b == a) {
				printf("a,b的最小公倍数为%d\n", a);
				c = 1;
				break;
			}
			if (b < a) {
				b = m;
				continue;
			}
			if (b > a) {
				b = m;
				a = k;
				break;
			}
		}
		if (c == 1)
		{
			break;
		}
	}
}