#include<stdio.h>
#include<stdlib.h>
int main()
{
	int k,i;
	int *m = malloc(sizeof(int) * k);
	k=0;
	while(k<6)
	{
		m[k]=k+1;
		k++;
	}
	for(i=0;i<k;i++)
	{	
		printf("%d\n", m[i]);
	}
	return 0;
}