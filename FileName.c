#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	int A;

	puts("Введите состояние датчика A (1 - сработал, 0 - нет): ");

	scanf("%d", &A);

	int B;

	puts("Введите состояние датчика B (1 - сработал, 0 - нет): ");

	scanf("%d", &B);

	int C;

	puts("Введите состояние датчика C (1 - сработал, 0 - нет): ");

	scanf("%d", &C);

	int D;

	puts("Введите состояние датчика D (1 - сработал, 0 - нет): ");

	scanf("%d", &D);

	int res = (A + B + C + D >= 3);

	printf("Запись включена (1 - да, 0 - нет): %d\n", res);

	return 0;
}