#include<stdio.h>
#include<string.h>
struct student {
	long num;
	char name[20];
	int score[4];
	int sum;
	int average;
};
void scorecpt(struct student* p) {
	int i, sum = 0, avg;
	for (i = 0; i < 4; i++)
		sum = sum + p->score[i];
	avg = sum / 4;
	p->sum = sum;
	p->average = avg;
}
void main() {
	struct student* p;
	struct student st[5] = {
		{99301,"zhangsan",{85,76,92,69}},
	{99302,"lisi",{74,80,71,62}},
	{99303,"wangjing",{68,88,74,78}},
	{99304,"huangming",{73,68,82,75}},
	{99305,"liuxiang",{86,78,83,90}}
	};
	printf("\n\t* * * * 用指向结构体数组的指针作函数参数 * * * *\n");
	printf("\n学号\t姓名\t\t成绩1\t成绩2\t成绩3\t成绩4\t总分\t平均分");
	for (p = st; p < st + 5; p++) {
		scorecpt(p);
		printf("\n%ld", p->num);
		printf("\t%-10s", p->name);
		printf("\t%d", p->score[0]);
		printf("\t%d", p->score[1]);
		printf("\t%d", p->score[2]);
		printf("\t%d", p->score[3]);
		printf("\t%d", p->sum);
		printf("\t%d", p->average);
	}
	printf("\n");
}