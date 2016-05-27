#include <stdio.h>

int main(void){

	char test = 65;
	char x = 'A';
	printf("%c\n", test);


	int a = x;
	printf("%d\n", a);

	char arrAscii[62] = "0123456789ABCDEFGHIGKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	int i;
	for(i = 0; i < 62; i++){

		int number = arrAscii[i];
		printf("%c ---> %d\n", arrAscii[i], number);
	}

	printf("=========================================================================\n");

	/*print all ascii characters*/
	for(i = 0; i < 127; i++){
		char ch = i;
		printf("%c ---> %d\n", ch, i);
	}
}