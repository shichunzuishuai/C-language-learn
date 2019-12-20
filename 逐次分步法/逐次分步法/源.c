#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
double f(double x);
int main() {
	double x, a, b, h, tn, t2n, e ,i,n;
	printf("\n请输入积分区间边界 a,b:");
	scanf_s("%lf,%lf", &a, &b);
	printf("\n请输入精度要求:");
	scanf_s("%lf", &e);
	h = b - a;
	n = 1;
	t2n = h * (f(a) + f(b)) / 2;
	do {
		tn = t2n;
		h /=2; t2n = 0;
		for (i = 0;i <= n - 1; i++) {
			x = a + h * (2 * i + 1);
			t2n += f(x);
		}
		t2n = tn / 2 + h * t2n;
		n *= 2;
	} while (fabs(t2n - tn) > e);
	printf("\n积分值=%lf", t2n);
}
double f(double x) {
	return x * x;
}                                                                                                                                                                                  