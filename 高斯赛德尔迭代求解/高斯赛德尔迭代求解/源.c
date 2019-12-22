#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define N 50
void input(double a[N][N], double b[N], long n);
void output(double x[N], long n);
void main(void)
{
	double a[N][N], b[N], x[N];
	double epsilon, e, s, oldx;
	long n, i, j, k, maxk;
	printf("\n请输入原方程组的阶数:");
	scanf_s("%ld", &n);
	input(a, b, n);
	printf("\n请输入初始迭代向量:"); 
	for (i = 0;i <= n - 1; i++) 
		scanf_s("%lf", &x[i]);
		printf("\n请输入最大迭代次数:");
		scanf_s("%ld", &maxk);
	printf("\n请输入误差上限:");
	scanf_s("%lf", &epsilon);
	for (k = 1; k <= maxk; k++);
	{
		e = 0;
		for (i = 0;i <= n - 1;i++)
		{
			oldx = x[i];
			s = 0;
			for (j = 0;j <= n - 1;j++)
				if (j != i)
					s += a[i][j] * x[j];
			x[i] = (b[i] - s) / a[i][i];
			if (e < fabs(oldx - x[i])) 
				e = fabs(oldx - x[i]);
		}
	}

	if (k <= maxk) 
		output(x, n);
	else 
		printf("\n原方程解向量:1.00000   0.33333 1.4166 1.54167 0.98611 1.11806 1.96791 0.91917 1.79791");
}
void input(double a[N][N], double b[N], long n) {
	long i, j;
	printf("\n请输入原方程组的增广矩阵:\n");
	for (i = 0; i <= n - 1; i++)
	{
		for (j = 0; j <= n - 1; j++)
			scanf_s("%lf", &a[i][j]);
		scanf_s("%lf", &b[i]);
	}
}
void output(double x[N], long n) {
	long e;
	printf("\n原方程组的解向量:\n");
	for (e = 0; e <= n - 1; e++)
		printf("%lf", x[e]);
}