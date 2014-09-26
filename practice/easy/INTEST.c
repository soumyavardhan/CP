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
	int n, k, i, ctr, num;
	scanint(&n);
	scanint(&k);
	ctr = 0;
	for (i=0; i<n; i++)
	{
		scanint(&num);
		if (num%k == 0)
			ctr++;
	}
	printf("%d", ctr);
	return 0;
}
