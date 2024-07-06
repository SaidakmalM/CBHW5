/*
 * 5_2.c
 * 
 * ���⠢��� �㭪��, ����� ��।���� �������訩 ��騩 ����⥫� ����
 * ����ࠫ��� �ᥫ � �ਢ��� �ਬ�� �� �ᯮ�짮�����
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
		printf("������ ��� ����ࠫ��� �᫠, ���? \n");
		scanf("%d%d", &x1, &x2);
		printf("\n");
		printf("\n");
		printf("�������訩 ��騩 ����⥫� ��� ��������� �ᥫ ࠢ��: %d\n", nod(x1, x2));
		return 0;
}
