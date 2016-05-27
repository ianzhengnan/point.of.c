#include <stdio.h>

int main(void){

	if ((2 > 1) == 1){
		printf("Ok\n");     // should display 'Ok'
	}else{
		printf("Not ok\n");
	}
	printf("%d\n", (2 == 1)); // 0

	int i = 0;
	while(i < 10){

		if (i == 5)
		{
			i++;
			continue;
		}
		printf("%d\n", i);
		i++;
		
	}

	char ch;
	while((ch = getchar()) != EOF){
		if (ch < '0' || ch > '9')
		{
			continue;
		}
		else
		{
			putchar(ch);
			// printf("\n");
			// printf("%c\n", ch);
		}
	}

	
}