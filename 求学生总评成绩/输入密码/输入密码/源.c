#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i, a, pin = 123456;
	for (i = 1;i < 4;i++) {
		printf("����������:\n");
		scanf_s("%d", &a);
		if (a == pin) {
			printf("������ȷ");
			break;
		}
		else if (i ==3) {
			printf("�����������3�Σ����Ժ�����\n");
		}
		else if (i != 3) {
			printf("�������������\n");
		}
	}
	return 0;
}