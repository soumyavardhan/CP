#include<stdio.h>
#define gc getchar_unlocked

inline void scanint(int *n)
{
	register int c = gc();
	int x = 0;
	int neg = 0;
	for (;((c<48 || c>57) && c != '-'); c = gc());
	if (c == '-')
	{
		neg = 1;
		c = gc();
	}
	for (;c>47 && c<58; c = gc())
	{
		x = (x<<1) + (x<<3) + c - 48;
	}
	if(neg)
	{
		x = -x;
	}
	*n=x;
}

int main()
{
	int t, num, i, zeros;
	scanint(&t);
	for (i=0; i<t; i++)
	{
		scanint(&num);
		int div = 5;
		zeros = 0;
		while(num/div != 0)
		{
			zeros += (num/div);
			div *= 5;
		}
		printf("%d\n", zeros);
	}
	return 0;
}
