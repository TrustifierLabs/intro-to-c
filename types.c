#include <stdio.h>

int char_test();

int main() {
	/* some primitive types in C */
	/* all types are signed (have a bit reserved for negative sign) unless
         * otherwise specified */

	char c;			/* 8-bit */
	short int s;		/* 16-bits */
	int k;			/* 32-bits (could be longer) */
	long l;			/* 32-bits or 64-bits */


	float f;		/* IEEE float */
	double d;		/* IEEE double */
	long double x;		/* 2 x 1EEE double */

	/* in C there is an operator called sizeof(x) always returns a long */
	int bits_in_byte = 8; //bits
	printf("sizeof(char)        = %ld bits\n", 	sizeof(c)*bits_in_byte);
	printf("sizeof(short)       = %ld bits\n", 	sizeof(s)*bits_in_byte);
	printf("sizeof(int)         = %ld bits\n", 	sizeof(k)*bits_in_byte);
	printf("sizeof(long)        = %ld bits\n", 	sizeof(l)*bits_in_byte);
	printf("sizeof(float)       = %ld bits\n", 	sizeof(f)*bits_in_byte);
	printf("sizeof(double)      = %ld bits\n", 	sizeof(d)*bits_in_byte);
	printf("sizeof(long double) = %ld bits\n", 	sizeof(x)*bits_in_byte);

	char_test();

}

int char_test() {
	short c1 = 5, c2 = 8; /* basically an 8-bit number */
	/* we've got eight bits */

	/* in this case the left-most bit indicates the sign of the number */
	printf("signed interpretation of data: %hd\n", c1 - c2);

	/* 	in the following case the left most bit is treated
 	 *  	as part of the number. */
	printf("unsigned interpretation of data: %hu\n", c1 - c2);
}

