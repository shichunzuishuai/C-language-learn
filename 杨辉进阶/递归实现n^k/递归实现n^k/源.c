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
	printf("��n^k��ֵ:\n");
	printf("������n��ֵ:\n");
	scanf_s("%d", &n);
	printf("������k��ֵ��\n");
	scanf_s("%d", &k);
	s = fact(n, k);
	printf("%d\n", s);
	return 0;
}