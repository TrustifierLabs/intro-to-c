/* 
 * just like cat, whatever it reads it writes back out
 *
	Homework:
		write a program that outputs the value of EOF
 */

#include <stdio.h>

int main() {
	int c;
	while((c = getchar()) != EOF) {
		putchar(c);
	}
}
