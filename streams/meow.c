/* 
 * just like cat, whatever it reads it writes back out
 */

#include <stdio.h>

int main() {
	char c;
	c = getchar();
	while(c != EOF) {
		putchar(c);
		c = getchar();
	}
}
