#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool fack(int a, int b, int c, int d, int e) {
	char temp = 0;
	temp |= 1 << a;
	temp |= 1 << b;
	temp |= 1 << c;
	temp |= 1 << d;
	temp |= 1 << e;
	if (temp == 62) {
		return true;
	}
	else
	{
		return false;
	}

}

int main() {
	int a, b, c, d, e;
	for (a = 1;a < 6; a++) {
		for (b = 1;b < 6; b++) {
			for (c = 1;c < 6; c++) {
				for (d = 1;d < 6; d++) {
					for (e = 1;e < 6; e++) {
						if ((a == 3) + (b == 2) == 1 && (b == 2) + (e == 4) == 1 && (c == 1) + (d == 2) == 1
							&& (c == 5) + (d == 3) == 1 && (e == 4) + (a == 1) && fack(a, b, c, d, e)) {
							printf("a%d b%d c%d d%d e%d", a, b, c, d, e);
						}						
					}
				}
			}
		}
	}
	return 0;
}