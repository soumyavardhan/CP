#include<stdio.h>
  
int main()
{
	int cash;
	float bal;
	scanf("%d %f", &cash, &bal);
	if(cash%5 == 0 && (bal - cash) > 0.5)
	{
		printf("%.2f", bal - cash - 0.5);
	}
	else
	{
		printf("%.2f", bal);
	}
	return 0;
} 
