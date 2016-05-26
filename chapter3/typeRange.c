#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){

	printf("The char range is from %d to %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("The unsigned char range is from 0 to %d\n", UCHAR_MAX);

	printf("The short int range is from %d to %d\n", SHRT_MIN, SHRT_MAX);
	printf("The unsigned short int is from 0 to %d\n", USHRT_MAX);

	printf("The int range is from %d to %d\n", INT_MIN, INT_MAX);
	printf("The unsigned int is from 0 to %d\n", UINT_MAX);

	printf("The long int range is from %d to %d\n", LONG_MIN, LONG_MAX);
	printf("The unsigned long int is from 0 to %d\n", ULONG_MAX);

	printf("============================================================\n");

	printf("The float range is from %f to %f\n", FLT_MIN, FLT_MAX);
	printf("The double range is from %f to %f\n", DBL_MIN, DBL_MAX);
	printf("The long double range is from %f to %f\n", LDBL_MIN, LDBL_MAX);


	/* RESULT */

	/*
		The char range is from -128 to 127
		The unsigned char range is from 0 to 255
		The short int range is from -32768 to 32767
		The unsigned short int is from 0 to 65535
		The int range is from -2147483648 to 2147483647
		The unsigned int is from 0 to -1
		The long int range is from -2147483648 to 2147483647
		The unsigned long int is from 0 to -1
		============================================================
		The float range is from 0.000000 to 340282346638528860000000000000000000000.000000
		The double range is from 0.000000 to 179769313486231570000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.000000
		The long double range is from -0.000000 to -1.#QNAN0
	*/

}