/*
 * This program converts Fahrenheit tempratures
 * to their centigrate (Celsius) equivalents 
 * and displays the result.
 * 
 * The formula is:
 *    C = 5/9 x (f - 32)
 */

#include <stdio.h>

int main()
{
	float fahr = 500.0;

	printf("result (using integer maths): %d\n", 5/9*(fahr - 32));
	printf("result (using floating point maths): %g\n", 5/9*(fahr - 32));
					/* format strings begin with %
                                         we use format strings to
					 indicate the type of value
	                                 that printf should expect */
}
