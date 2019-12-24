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
		printf("请输入你猜的数字:\n");
		scanf_s("%d", &input);

		if (input > random_num) {
			printf("猜大了\n");
			j++;
		}
		else if (input < random_num) {
			printf("猜小了\n");
			j++;
		}
		else {
			printf("恭喜你，猜对了\n");
		}
		if (j == 6) {
			printf("你的机会用完了。\n");
		}
	}
}
int main() {
	int input = 0;
	srand((unsigned)time(NULL));
	do {
		menu();
		printf("请选择:");
		scanf_s("%d",&input);
		switch (input) {
		case 1:game();break;
		case 0:break;
		default:printf("输入错误,请重新选择。\n");break;
		}
	} while (input);
	return 0;
}