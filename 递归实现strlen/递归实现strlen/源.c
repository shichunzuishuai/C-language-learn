#include<stdio.h>
char strlen(char* n ){
	if (*n == '\0')
		return 0;
	return 1 + strlen(n + 1);
}  
int main() {
	char n[] = "sadas";
	int ret = strlen(n);
	printf("%d", ret);
	return 0;
}