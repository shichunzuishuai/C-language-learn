#include<stdio.h>
int main() {
	int arr[5] = { -1,2,3,-4,7 };
	int i, j, maxsum = 0, thissum;
	for (i = 0;i <5 ;i++)
	{
		thissum = 0;
		for (j = i;j < 5;j++){
			thissum += arr[j];
		if (thissum > maxsum ) {
				maxsum = thissum;
			}
	   }
		
	}
	printf("%d\n", maxsum);
}