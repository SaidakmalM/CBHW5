/*
 * 5_4.c
 * 
 * ���⠢��� �㭪��, ����� ��।���� �㬬� ��� �ᥫ �� 1 �� N
 * �ਢ��� �ਬ�� �� �ᯮ�짮�����
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
		printf("������ 楫�� �᫮: \n");
		scanf("%d", &k);
		printf("%d\n", summan(k));
	return 0;
}
