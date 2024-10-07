#include <locale.h>
#include <stdio.h>
#define d 1

void main()
{
	setlocale(LC_CTYPE, "RUS");

	float x = 0, y = 0;

	puts("Введите значение x: ");
	scanf("%f.", &x);
	puts("Введите значение y: ");
	scanf("%f.", &y);

	float f;
	f = (pow(cos(x), 3) * y + pow(2, x) * d) / (exp(y) + log(pow(sin(x), 2) + 7.4));

	printf("Значение функции будет равно %f.", f);
}