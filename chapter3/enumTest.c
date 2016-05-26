#include <stdio.h>

int main(void){

	float a = 10;
	double b = 20;
	a = b;
	printf("%f\n", a);

	enum Liquid{ OUNCE = 1, CUP = 8, PINT = 16, QUANT = 32, GALLON = 128};

	enum DAY {MON=1, TUE, WED, THD, FRI, SAT, SUN};

	enum Liquid jar;
	enum DAY yesterday = WED, today = THD, tomorrow = FRI;

	jar = QUANT;
	printf("%d\n", jar);
	printf("%d %d %d\n", yesterday, today, tomorrow);

}