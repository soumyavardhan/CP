#include<stdio.h>
#include<string.h>

int main()
{
	char str[101];
	int count, t, j;
	int holes[26] = {1, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
	scanf("%d", &t);
	while (t-->0)
	{
		scanf("%s", str);
		count = 0;
		for(j=0; j<strlen(str); j++)
		{
			count += holes[str[j] - 'A'];
		}
		printf("%d\n", count);
	}
	return 0;
}
