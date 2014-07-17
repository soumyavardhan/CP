#include<stdio.h>

int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}

int main()
{
	int t, i, j;
	scanf("%d", &t);
	while(t-->0)
	{
		int l;
		scanf("%d", &l);
		int tri[l][l];
		for(i=0; i<l; i++)
		{
			for(j=0; j<=i; j++)
			{
				scanf("%d", &tri[i][j]);
			}
		}
		int dp[l][l];
		dp[0][0] = tri[0][0];
		for(i=1; i<l; i++)
		{
			for(j=0; j<=i; j++)
			{
				//printf("i:%d j:%d dp[i-1][j]:%d dp[i-1][j-1]:%d tri[i][j]:%d\n", i, j, dp[i-1][j], dp[i-1][j-1], tri[i][j]);
				if(j == 0)
				{
					dp[i][j] = tri[i][j] + dp[i-1][j];
					//printf("j==0\n");
				}
				else if(j == i)
				{
					dp[i][j] = tri[i][j] + dp[i-1][j-1];
					//printf("j==i\n");
				}
				else
                                {
                                        dp[i][j] = max(tri[i][j] + dp[i-1][j], tri[i][j] + dp[i-1][j-1]);
					//printf("else\n");
                                }
			}
		}
		/*for(i=0; i<l; i++)
		{
			for(j=0; j<=i; j++)
			{
				printf("%d ", dp[i][j]);
			}
			printf("\n");
		}
		printf("\n\n");*/
		int m = dp[l-1][0];
		for(i=0; i<l; i++)
		{
			if(dp[l-1][i] > m)
			{
				m = dp[l-1][i];
			}
		}
		printf("%d\n", m);
	}
	return 0;
}
