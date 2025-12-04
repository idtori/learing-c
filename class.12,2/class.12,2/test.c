#include<stdio.h>
#include<string.h>

int main()
{
	/*int len_a = 0;
	int len_b = 0;
	int i = 0;
	char a[100] = { 0 }, b[100] = { 0 };
	gets(a);
	gets(b);
	for (i = 0; a[i] != 0; i++)
	{
		len_a++;
	}
	for (i = 0; b[i] != 0; i++)
	{
		len_b++;
	}
	if (len_b > 5)
	{
		len_b = 5;
	}
	for (i = 0; i < len_b; i++)
	{
		a[len_a + i] = b[i];
	}
	printf("%s", a);*/


	int len_s1 = 0;
	int len_s2 = 0;
	int j = 0;
	int k = 0;
	int min = 0;
	char s1[100] = { 0 };
	char s2[100] = { 0 };
	gets(s1);
	gets(s2);
	int i = 0;
	char  s[100] = { 0 };
	for (i = 0; s1[i] != 0; i++)
	{
		len_s1++;
	}
	for (i = 0; s2[i] != 0; i++)
	{
		len_s2++;
	}
	min = (len_s1 < len_s2) ? len_s1 : len_s2;
	for (i = 0; i < 2 * min; i++)
	{
		if (i % 2 == 0)
		{
			s[i] = s1[j];
			j++;
		}
		else
		{
			s[i] = s2[k];
			k++;
		}
	}
	if (len_s1 < len_s2)
	{
		for (i = 0; i < len_s2 - len_s1; i++)
		{
			s[2 * len_s1 + i] = s2[len_s1 + i];
		}
	}
	if (len_s1 > len_s2)
	{
		for (i = 0; i < len_s1 - len_s2; i++)
		{
			s[2 * len_s2 + i] = s1[len_s2 + i];
		}
	}
	printf("%s", s);
	return 0;
}