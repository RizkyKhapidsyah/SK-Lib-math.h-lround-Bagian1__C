#include <stdio.h>      /* printf */
#include <math.h>       /* lround */
#include <conio.h>

int main() {
	printf("lround (4.7) = %ld\n", lround(4.7));
	printf("lround (9.3) = %ld\n", lround(9.3));
	printf("lround (-1.6) = %ld\n", lround(-1.6));
	printf("lround (-7.4) = %ld\n", lround(-7.4));
	_getch();
	return 0;
}