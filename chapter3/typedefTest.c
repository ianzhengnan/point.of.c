#include <stdio.h>

// declare
void testFunction(int x);

int r = 30;
int h = 40;

int main(void){

	typedef char *char_type;

	char_type ch;

	// &ch = 'a';

	const int kaka = 15;

	// kaka = 20; // error

	int i = 100;

	static int a;

	// printf("%c\n", ch);

	if(i > 10){

		register int x = 30;
		printf("x = %d, a = %d\n", x, a);

	}
	int j;
	for(j = 0; j < 20 ; j++){
		static int q = 0;
		q += j;
	}

	// printf("%d\n", q);

	int test(int i){
		printf("%d\n", i);
	}
	test(i);
}


// define
void testFunction(int x){
	// test(20);
	printf("%d\n", x);
}