#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i, a, pin = 123456;
	for (i = 1;i < 4;i++) {
		printf("ÇëÊäÈëÃÜÂë:\n");
		scanf_s("%d", &a);
		if (a == pin) {
			printf("ÊäÈëÕýÈ·");
			break;
		}
		else if (i ==3) {
			printf("ÄãÒÑÊäÈë´íÎó3´Î£¬ÇëÉÔºóÔÙÊÔ\n");
		}
		else if (i != 3) {
			printf("ÃÜÂë´íÎó£¬ÇëÖØÊÔ\n");
		}
	}
	return 0;
}