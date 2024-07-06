/*
 * 5_1.c
 * 
 * Необходимо составить функцию, которая определяет, сколько зерен попросил
 * положить на N-ю клетку изобретатель шахмат 
 * (на 1-ю - 1 зерно, на 2-ую - 4 зерна, на з-ю - 4 зерна, ...)
 * 
 */

#include <stdio.h>

unsigned long long int zerna (int k)
{
	unsigned long long n = 1;
		for (int i = 2; i <= k; i++)
			n *= 2;
	return n;
}

int main()
{
	int l;
		printf("Какая клетка интересует, Шеф? \n");
		scanf("%d", &l);
		printf("%llu\n", zerna(l));
		return 0;
}
