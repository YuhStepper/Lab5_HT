#include <locale.h>
#include <stdio.h>
#define d 1

void main()
{
	setlocale(LC_CTYPE, "RUS");

	float x = 0, y = 0;

	puts("������� �������� x: ");
	scanf("%f.", &x);
	puts("������� �������� y: ");
	scanf("%f.", &y);

	float f;
	f = (pow(cos(x), 3) * y + pow(2, x) * d) / (exp(y) + log(pow(sin(x), 2) + 7.4));

	printf("�������� ������� ����� ����� %f.", f);
}