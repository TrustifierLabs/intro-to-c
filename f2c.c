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

float ask_for_float(char prompt[]) {
	int rv = 0;
	float foo;
	char str[80], garbage[80];; 
	while(rv != 1) {
		printf("%s", prompt);
		fgets(str, 80, stdin);
		rv = sscanf(str, "%f%s", &foo, garbage);
		if ( rv != 1 ) {
			fprintf(stderr, "error: invalid input, please try again\n");
		}
	}

	return foo;
}

int main()
{

	float start = 100.0, end = 600.0, step = 50.0, fahr;
	float temp;
	char garbage[80]; 
	int rv = 0;

	start = ask_for_float("give me a start: ");

	end = ask_for_float("give me an end: ");

	step = ask_for_float("give me a step size: ");

	if ( start > end && step > 0 ) {
		step = -step; /* negative step */
	}
	/* 
		a <= b <=> c*a <= c*b 
		-a >= -b
		a <= b
	*/

	for(fahr = start; step*fahr <= step*end; fahr = fahr + step) {
		printf("%g°F => %5.1f°C\n", fahr, fahrenheit_to_celsius(fahr));
	}


}
