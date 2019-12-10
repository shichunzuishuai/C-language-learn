#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 100000; i++)
	{
		//1、求i为几位数
		int tmp = i;
		int count = 0;
		int sum = 0;
		while (tmp != 0)
		{
			count++;
			tmp = tmp / 10;
		}
		tmp = i;
		while (tmp != 0)
		{
			sum += pow((double)(tmp % 10), (double)count);
			tmp = tmp / 10;
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
