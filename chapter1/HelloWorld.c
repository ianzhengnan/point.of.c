#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	int length = 20;
	char input[length];

	while(gets(input) != NULL)
	{
		printf("%s\n", input);
	}

	return EXIT_SUCCESS;
}