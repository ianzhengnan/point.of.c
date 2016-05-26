#include <stdio.h>

int main(void){

	float weight;
	float value;

	printf("How much you weight worth for gold?\n");
	printf("Let's check it out!\n");
	printf("Please input your weight:\n");
	scanf("%f", &weight);
	value = 350 * weight * 1000;
	printf("Your weight is worth %.2f RMB\n", value);
	return 0;
}