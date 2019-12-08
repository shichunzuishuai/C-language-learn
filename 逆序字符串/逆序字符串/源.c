#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int main() {
	char str[256] = { 0 };
	scanf("%[^\n]", str);
	int len = strlen(str);
	int i, j;
	char temp;
	for (i = 0, j = len - 1;i < j; i++, j--) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	puts(str);
}