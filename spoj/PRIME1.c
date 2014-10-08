#include<stdio.h>

#define N 32000

int main()
{
	int arr[N+1], i, j;
	int factors[3409];
	int m, n;
	arr[0] = 1;
	arr[1] = 1;
	for(i=2; i<N; i++)
	{
		for(j=i+i; j<N; j+=i)
		{
			arr[j] = 1;
		}
	}
	int count=0;
	for(i=0; i<N; i++)
	{
		if(arr[i] == 0)
		{
			factors[count] = i;
			count++;
		}
	}
	scanf("%d %d", &m, &n);
	int arr2[n-m+1];
	for (i=0; i<=3409; i++)
	{
		int f = m/factors[i];
		for (j=factors[i]*(f+1); j<=n; j+=factors[i])
		{
			arr2[j-m] = 1;
		}
	}
	for(i=0; i<(n-m+1); i++)
	{
		if (arr2[i] == 0)
		{
			printf("%d\n", i+m);
		}
	}
	return 0;
}
