#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t-->0)
    {
        int n, k, i;
        long int max = 0;
        scanf("%d %d", &n, &k);
        long int A[n], B[n];
        for(i=0; i<n; i++)
        {
            scanf("%ld", &A[i]);
        }
        for(i=0; i<n; i++)
        {
            scanf("%ld", &B[i]);
        }
        for(i=0; i<n; i++)
        {
            long int no_stones = k/A[i];
            long int profit = no_stones * B[i];
            if(profit > max)
            {
                max = profit;
            }
        }
        printf("%ld\n", max);
    }
    return 0;
}
