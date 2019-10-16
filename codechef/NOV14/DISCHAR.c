//https://www.codechef.com/NOV14/problems/DISCHAR
#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while(t-->0)
    {
        int c = 0, i = 0;
        char l;
        int freq[26];
        while(i<26)
        {
            freq[i] = 0;
            i++;
        }
        scanf("%c", &l);
        while(l != '\n')
        {
            freq[l - 'a']++;
            if(freq[l - 'a'] == 1)
                c++;
            scanf("%c", &l);
        }
        printf("%d\n", c);
    }
    return 0;
}
