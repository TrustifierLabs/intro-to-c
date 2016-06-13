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
	printf("sizeof(char)  = %ld\n", 	8*sizeof(c));
	printf("sizeof(short) = %ld\n", 	8*sizeof(s));
	printf("sizeof(int)   = %ld\n", 	8*sizeof(k));
	printf("sizeof(long)  = %ld\n", 	8*sizeof(l));
	printf("sizeof(float) = %ld\n", 	8*sizeof(f));
	printf("sizeof(double)= %ld\n", 	8*sizeof(d));
	printf("sizeof(long double)= %ld\n", 	8*sizeof(x));

	char_test();

}

int char_test() {
	short c1 = 5, c2 = 8; /* basically an 8-bit number */
	/* we've got eight bits */

	printf("signed interpretation of data: %hd\n", c1 - c2);
	/* 	in the following case the left most bit is treated
		as part of the number. */

	printf("unsigned interpretation of data: %hu\n", c1 - c2);
}
