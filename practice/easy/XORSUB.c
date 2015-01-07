#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t-->0)
    {
        int n, k, i, j;
        scanf("%d %d", &n, &k);
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }
        int dp[n+1][1024];
        for(i=0; i<=n; i++)
        {
            for(j=0; j<=1023; j++)
            {
                dp[i][j] = 0;
            }
        }
        dp[0][0] = 1;
        for(j=1; j<1024; j++)
        {
            dp[0][j]=0;
        }
        for(i=1; i<=n; i++)
        {
            for(j=0; j<1024; j++)
            {
                dp[i][j] = dp[i-1][j] || dp[i-1][j ^ a[i-1]];
            }
        }
        int max=0;
        for(j=0; j<1024; j++)
        {
            if(dp[n][j]*(k^j) > max)
            {
                max=dp[n][j]*(k^j);
            }
        }
        printf("%d\n", max);
    }
}
