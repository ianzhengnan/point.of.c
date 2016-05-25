#include <stdio.h>

int main(void)
{
	int value = 100;
	printf("%d\n", (value = value - 48));
	// printf("%d\n", (value = value - \60));
	printf("%d\n", (value = value - '0'));

}