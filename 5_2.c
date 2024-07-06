/*
 * 5_2.c
 * 
 * Составить функцию, которая определяет наибольший общий делитель двух
 * натуральных чисел и привести пример ее использования
 * https://younglinux.info/algorithm/euclidean
 * 
 */

#include <stdio.h>

int nod(int x1, int x2)
{
	int x3;
	while (x2 != 0)
	{
		x3 = x2;
		x2 = x1 % x2;
		x1 = x3;
	}
	return x1;
}

int main()
{
	int x1, x2;
		printf("Введите два натуральных числа, Шеф? \n");
		scanf("%d%d", &x1, &x2);
		printf("\n");
		printf("\n");
		printf("Наибольший общий делитель для введенных чисел равен: %d\n", nod(x1, x2));
		return 0;
}
