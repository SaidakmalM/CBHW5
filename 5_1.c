/*
 * 5_1.c
 * 
 * ����室��� ��⠢��� �㭪��, ����� ��।����, ᪮�쪮 ��७ ����ᨫ
 * �������� �� N-� ����� ������⥫� �嬠� 
 * (�� 1-� - 1 ��୮, �� 2-�� - 4 ��ୠ, �� �-� - 4 ��ୠ, ...)
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
		printf("����� ���⪠ �������, ���? \n");
		scanf("%d", &l);
		printf("%llu\n", zerna(l));
		return 0;
}
