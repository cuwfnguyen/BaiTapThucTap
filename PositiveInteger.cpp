#include <stdio.h>
int check(char* a)
{
	int i = 0;
	while (a[i] != NULL)
	{
		if ('0' >= a[i] || a[i] > '9')
			return 0;
		i++;
	}
	return 1;
}


void main()
{
	char s[100];
	do
	{
		printf("\nNhap vao 1 so nguyen duong: ");
		scanf_s("%s", s);
	}

	while (check(s) == 0);
		printf("Thoa man!So vua nhap la: %s", s);
}
