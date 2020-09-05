#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
int main()
{
	int num, x = 0;
	scanf("%d", &num);
	do {
		if (x >= 10) {
			num = x;
			x = 0;
		}
		while (num >= 1) {
			x += num % 10;
			num /= 10;
		}
	} while (x >= 10);
	printf("%d", x);
	return 0;
}