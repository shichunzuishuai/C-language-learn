#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i,j,k, max = 0, min = 0;
	int arr[10];
	printf("ÇëÊäÈë10¸öÊı:\n");
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &arr[i]);
		max = arr[0];
		min = arr[0];
		j = 0;
		k = 0;
	}
	for (i = 0; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
			j = i;
		}
		 if (arr[i] < min) {
			 min = arr[i];
			 k = i;
		}
	}
	printf("max:arr[%d] = %d,  min:arr[%d] = %d", j, max, k, min);
}