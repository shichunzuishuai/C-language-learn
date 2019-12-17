#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int max(int x, int y, int z) {
	int r = 0;
	r = x > y ? x : y;
	return (r > z ? r : z);
}
int min(int x, int y, int z) {
	int r = 0;
	r = x < y ? x : y;
	return (r < z ? r : z);
}
int dif(int x, int y, int z) {
	return max(x, y, z) - min(x, y, z);
}
int main() {
	int x, y, z, d = 0;
	printf("请输入三个数:\n");
	scanf("%d%d%d", &x, &y, &z);
	d = dif(x, y, z);
	printf("%d", d);
}