/*
 * 5_3.c
 * 
 * ���⠢��� �������� �㭪��, ����� ��।����,
 * ��୮ ��, �� � �������� �᫥ �㬬� ��� ࠢ�� �ந��������
 * int is_happy_number(int n)
 * 
 */

#include <stdio.h>

int is_happy_number(int n)
{
	int summa = 0, multipl = 1;
		while (n > 0)
		{
			summa += n % 10;
			multipl *= n % 10;
			n /= 10;
		}
	return (summa == multipl);
}

int main()
{
	int n;
		printf("������ 楫�� �᫮ ��� �஢�ન: \n");
		scanf("%d", &n);
		is_happy_number(n) ? printf("YES") : printf("NO");
	return 0;
}
