#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define row 3
#define col 5
int main() {
	int arr[row][col] = { 0 };
	int a[row];
	int sum = 0, ave = 0;
	int i, j;
	printf("请输入三门课5个人的成绩:\n");
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			scanf_s("%d",&arr[i][j]);
			sum += arr[i][j];
		}
		a[i] = sum / 5;
		sum = 0;
	}
	ave = (a[0] + a[1] + a[2]) / 3;
	printf("math:%d\nC:%d\nF:%d\n", a[0], a[1], a[2]);
	printf("总评:%d\n", ave);
}
