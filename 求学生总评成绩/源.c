#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i = 1, j;
	double score[5];
	char kongge = '\x20';
	double bili[4] = { 0.1,0.2,0.2,0.5 };
	while (kongge == '\x20') {
		printf("请输入第%2d个同学的成绩:\n",i++);
		printf("平时: 实习: 测验: 期末:\n");
		score[4] = 0;
		for (j = 0; j < 4; j++) {
			scanf_s("%lf", &score[j]);
			score[4] += score[j] * bili[j];
		}
		printf("总评成绩为:%lf\n", score[4]);
		printf("按空格继续，其他键退出\n");
		kongge = getch();
	}
}