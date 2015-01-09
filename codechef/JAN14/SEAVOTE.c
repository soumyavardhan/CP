#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t-->0)
    {
        int n, i;
        scanf("%d", &n);
        int B[n];
        int t_max = 0;
        int t_min = 0;
        for(i=0; i<n; i++)
        {
            scanf("%d", &B[i]);
            if(B[i] == 0)
            {
                t_max += B[i];
                t_min += B[i];
            }
            else
            {
                t_max += B[i];
                t_min += (B[i]-1);
            }
        }
        if(t_max>=100 && t_min<100)
        {
                printf("YES\n");
        }
        else
        {
                printf("NO\n");
        }
    }
    return 0;
}
