#include<stdio.h>

int gcd(int a, int b)
{

        if(b == 0) {
                return a;
        }
        else {
                return gcd(b, a % b);
        }
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t-->0)
    {
        int n, q, i=0;
        scanf("%d %d", &n, &q);
        int A[n];
        while(i<n)
        {
            scanf("%d", &A[i]);
            i++;
        }
        int prefix[n], suffix[n];
        prefix[0] = A[0];
        suffix[n-1] = A[n-1];
        for(i=1; i<n; i++)
        {
            if(prefix[i-1]<A[i])
            {
                prefix[i] = gcd(A[i], prefix[i-1]);
            }
            else
            {
                prefix[i] = gcd(prefix[i-1], A[i]);
            }
        }
        for(i=n-2; i>=0; i--)
        {
            if(suffix[i+1]<A[i])
            {
                suffix[i] = gcd(A[i], suffix[i+1]);
            }
            else
            {
                suffix[i] = gcd(suffix[i+1], A[i]);
            }
        }
        for(i=0; i<q; i++)
        {
            int l, r;
            scanf("%d %d", &l, &r);
            l--;r--;
            if(l==0)
            {
                printf("%d\n", suffix[r+1]);
            }
            else if(r==n-1)
            {
                printf("%d\n", prefix[l-1]);
            }
            else
            {
                if(suffix[r+1] < prefix[l-1])
                {
                    printf("%d\n", gcd(prefix[l-1], suffix[r+1]));
                }
                else
                {
                    printf("%d\n", gcd(suffix[r+1], prefix[l-1]));
                }
            }
        }
    }
    return 0;
}
