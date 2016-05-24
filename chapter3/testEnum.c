#include <stdio.h>

int main(void)
{
	enum ian_type {
		CUP,
		PINT,
		QUART,
		HALF_GALLON,
		GALLON
	};

	enum ian_type a, b, c;

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%s\n", c);
}