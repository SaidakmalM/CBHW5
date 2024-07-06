/*
 * 5_4.c
 * 
 * Составить функцию, которая определяет сумму всех чисел от 1 до N
 * привести пример ее использования
 * 
 * 
 */

#include <stdio.h>

int summan(int n)
{
	int z = 0;
		for (int i = 1; i <= n; i++)
		z += i;
	return z;
}

int main()
{
	int k;
		printf("Введите целое число: \n");
		scanf("%d", &k);
		printf("%d\n", summan(k));
	return 0;
}
