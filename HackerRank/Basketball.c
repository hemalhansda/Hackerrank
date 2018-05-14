#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	int i, j, n;
	int high, low, hs, ls;
	scanf("%d", &n);
	int *a = malloc(sizeof(int) * n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	hs=0;
	ls=0;
	high=a[0];
	low=a[0];
	for(i=0;i<(n-1);i++)
	{
		if(high<a[i+1])
		{
			high=a[i+1];
			hs=hs+1;
		}
		if(low>a[i+1])
		{
			low=a[i+1];
			ls=ls+1;
		}
	}
	printf("%d %d", hs, ls);
    return 0;
}
