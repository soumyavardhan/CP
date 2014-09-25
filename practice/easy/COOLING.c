#include<stdio.h>
#include<malloc.h>


int* merge(int a[], int b[], int m, int n)
{
	int *arr, i=0, j=0, k=0;
	arr = (int *)malloc((m+n) * sizeof(int));
	while(i<m && j<n)
	{
		if(a[i] < b[j])
		{
			arr[k] = a[i];
			k++; i++;
		}
		else
		{
			arr[k] = b[j];
			k++; j++;
		}
	}
	while(i<m)
	{
		arr[k] = a[i];
		k++; i++;
	}
	while(j<n)
	{
		arr[k] = b[j];
		k++; j++;
	}
	return arr;
}

int* sort(int arr[], int n)
{
	if(n == 1)
	{
		return arr;
	}
	int i, j;
	int *arr1, *arr2;
	arr1 = (int *)malloc((n/2) * sizeof(int));
	arr2 = (int *)malloc((n/2 + 1) * sizeof(int));
	for(i=0; i<n/2; i++)
	{
		arr1[i] = arr[i];
	}
	j=0;
	for(i=n/2; i<n; i++)
	{
		arr2[j] = arr[i];
		j++;
	}
	arr1 = sort(arr1, n/2);
	arr2 = sort(arr2, n-n/2);

	int *arrs;
	if(n%2 == 0)
	{
	       	arrs = merge(arr1, arr2, n/2, n/2);
	}
	else
	{
		arrs = merge(arr1, arr2, n/2, n/2 + 1);
	}
	return arrs;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t-->0)
	{
		int n, i, j;
		scanf("%d", &n);
		int *weight, *limit;
		weight = (int *)malloc(n*sizeof(int));
		limit = (int *)malloc(n*sizeof(int));
		for(i=0; i<n; i++)
		{
			scanf("%d", &weight[i]);
		}
		for(i=0; i<n; i++)
		{
			scanf("%d", &limit[i]);
		}
		weight = sort(weight, n);
		limit = sort(limit, n);
		int count = 0;
		for(i=0, j=0; i<n && j<n; j++)
		{
			if(weight[i] <= limit[j])
			{
				count++; i++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
