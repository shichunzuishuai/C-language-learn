#include<stdio.h>
#include<math.h>
#define N 50
void input(double a[], double b[], double c[], double d[], double e[], double f[], long n);
void output(double x[], long n);
void main() {
	double a[N], b[N], c[N], d[N], e[N], f[N], x[N];
	long n, i;
	printf("\n输入方程组的阶数:");
	scanf_s("%ld", &n);
	input(a, b, c, d, e, f, n);
	for (i = 1;i <= n - 2;i++) {
		b[i] /= -c[i - 1];
		c[i] += d[i - 1] * b[i];
		d[i] += e[i - 1] * b[i];
		f[i] += f[i - 1] * b[i];

		a[i + 1] /= -c[i - 1];
		b[i + 1] += d[i - 1] * a[i + 1];
		c[i + 1] += e[i - 1] * a[i + 1];
		f[i + 1] += f[i - 1] * a[i + 1];
	}
	b[n - 1] /= -c[n - 2];
	c[n - 1] += d[n - 2] * b[n - 1];
	f[n - 1] += f[n - 2] * b[n - 1];

	x[n - 1] = f[n - 1] / c[n - 1];
	x[n - 2] = (f[n - 2] - d[n - 2] * x[n - 1]) / c[n - 2];
	for (i = n - 3;i >= 0;i--)
		x[i] = (f[i] - d[i] * x[i + 1] - e[i] * x[i + 2]) / c[i];
	output(x, n);
}
void input(double a[], double b[], double c[], double d[], double e[], double f[], long n)
{
	long i;
	printf("\n请输入增广矩阵:\n");
	printf("\nc1,d1,e1,f1:");
	scanf_s("%lf,%lf,%lf,%lf", &c[0], &d[0], &e[0], &f[0]);
	printf("\nb2,c2,d2,e2,f2:");
	scanf_s("%lf,%lf,%lf,%lf,%lf,", &b[1], &c[1], &d[1], &e[1], &f[1]);
	for (i = 2;i <= n - 3;i++)
	{
		printf("\n a%ld,b%ld,c%ld,d%ld,e%ld,f%ld:", i + 1, i + 1, i + 1, i + 1, i + 1, i + 1);
		scanf_s("%lf,%lf,%lf,%lf,%lf,%lf", &a[i], &b[i], &c[i], &d[i], &e[i], &f[i]);
	}
	printf("\n a%ld,b%d,c%ld,d%d,f%ld:", n - 1, n - 1, n - 1, n - 1, n - 1);
	scanf_s("%lf,%lf,%lf,%lf,%lf", &a[n - 2], &b[n - 2], &c[n - 2], &d[n - 2], &f[n - 2]);
	printf("\n a%ld,b%ld,c%ld,f%ld:", n, n, n, n);
	scanf_s("%lf,%lf,%lf,%lf", &a[n - 1], &b[n - 1], &c[n - 1], &f[n - 1]);
}
void output(double x[], long n)
{
	long i;
	printf("\n方程的解为:\n");
	for (i = 1;i <= n;i++)
		printf(" %lf", x[i - 1]);
}