#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i = 1, j;
	double score[5];
	char kongge = '\x20';
	double bili[4] = { 0.1,0.2,0.2,0.5 };
	while (kongge == '\x20') {
		printf("�������%2d��ͬѧ�ĳɼ�:\n",i++);
		printf("ƽʱ: ʵϰ: ����: ��ĩ:\n");
		score[4] = 0;
		for (j = 0; j < 4; j++) {
			scanf_s("%lf", &score[j]);
			score[4] += score[j] * bili[j];
		}
		printf("�����ɼ�Ϊ:%lf\n", score[4]);
		printf("���ո�������������˳�\n");
		kongge = getch();
	}
}