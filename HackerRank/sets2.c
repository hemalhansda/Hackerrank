#include<stdio.h>
int main()
{
	int i=0,j,seta;
	int a[77];
	int n;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(j=1;j<=100;j++)
	{
		while(i<n)
		{
			if(a[i]%j==0)
			{
				seta = j;
				i++;
			}
			else
			{
				break;
			}
		}
		i = 0;
	}
	printf("%d", seta);
	return 0;
}