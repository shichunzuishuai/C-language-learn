#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	int a, n, j, i, sum=0, k=0;
	printf("������a��ֵ :\n");
	scanf("%d", &a);
	printf("��������ǰ�������:\n");
	scanf("%d", &n);
	for (i = 1;i < n+1;i++) {
		k = k * 10 + a;
		sum += k;
	}
	printf("%d\n", sum);
}