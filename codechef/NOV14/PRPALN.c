//https://www.codechef.com/NOV14/problems/PRPALN
#include<stdio.h>
#include<string.h>

int check_pal(char *str, int s, int e)
{
    int i = s, j = e;
    while(i<j)
    {
        if(str[i] == str[j])
        {
            i++; j--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int check_del_pal(char *str, int s, int e)
{
    int i = s, j = e;
    while(i < j)
    {
        if(str[i] == str[j])
        {
            i++; j--;
        }
        /*else if (str[i+1] == str[j])
        {
            return check_pal(str, i+1, j);
        }
        else if (str[i] == str[j-1])
        {
            return check_pal(str, i, j-1);
        }*/
        else
        {
            return check_pal(str, i+1, j) || check_pal(str, i, j-1);
        }
    }
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while(t-->0)
    {
        char str[100000];
        scanf("%s", str);
        int len = strlen(str);
        int i=0, j=len-1;
        int res = check_del_pal(str, i, j);
        if(res == 0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
