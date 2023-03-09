#include <stdio.h>
#include "aritmatika.h"

int main() {
	float a = 6.25;
	float b = 0.25;

	printf("%.2f * %.2f = %.2f\n", a, b, kali(a, b));
	printf("%.2f / %.2f = %.2f\n", a, b, bagi(a, b));

	return 0;

}