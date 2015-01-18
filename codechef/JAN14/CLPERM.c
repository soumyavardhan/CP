#include<stdio.h>
#include<math.h>

int is_power_of_two(int n)
{
    return n && (!(n & n-1));
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t-->0)
    {
        int n, k, i, flag=0;
        scanf("%d %d", &n, &k);
        int fall[k];
        for(i=0; i<k; i++)
        {
            scanf("%d", &fall[i]);
            if (is_power_of_two(fall[i]))
            {
                if(fall[i]%2 == 0)
                {
                    printf("Mom\n");
                }
                else
                {
                    printf("Chef\n");
                }
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            continue;
        }
        int l = (int) (log(n)/log(2));
        int chance = 1<<(l+1);
        if(chance%2 == 0)
        {
            printf("Mom\n");
        }
        else
        {
            printf("Chef\n");
        }
    }
}
