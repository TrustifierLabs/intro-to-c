/*
 * This program converts Fahrenheit tempratures
 * to their centigrate (Celsius) equivalents 
 * and displays the result.
 * 
 * The formula is:
 *    C = 5/9 x (f - 32)
 */

#include <stdio.h>

float fahrenheit_to_celsius(float fahr)
{
	return 5.0/9 * (fahr - 32);
}

int main()
{

	printf("result (using floating point maths): %g\n",
		fahrenheit_to_celsius(500.0));
					/* format strings begin with %
                                         we use format strings to
					 indicate the type of value
	                                 that printf should expect */
}
