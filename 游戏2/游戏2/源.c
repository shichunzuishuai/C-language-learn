#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu() {
	printf("*********************\n");
	printf("*********1.play******\n");
	printf("*********0.play******\n");
	printf("*********************\n");
}
void game() {
	int random_num = rand() % 100 + 1;
	int i, j=0, input;
	for (i = 1;i < 7;i++) {
		printf("��������µ�����:\n");
		scanf_s("%d", &input);

		if (input > random_num) {
			printf("�´���\n");
			j++;
		}
		else if (input < random_num) {
			printf("��С��\n");
			j++;
		}
		else {
			printf("��ϲ�㣬�¶���\n");
		}
		if (j == 6) {
			printf("��Ļ��������ˡ�\n");
		}
	}
}
int main() {
	int input = 0;
	srand((unsigned)time(NULL));
	do {
		menu();
		printf("��ѡ��:");
		scanf_s("%d",&input);
		switch (input) {
		case 1:game();break;
		case 0:break;
		default:printf("�������,������ѡ��\n");break;
		}
	} while (input);
	return 0;
}