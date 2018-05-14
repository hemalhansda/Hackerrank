#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,j,k,l,seta;
	int a_i, b_i;
	i=0;
	l=0;
	int n; 
    int m;
	int x;
	int *num = malloc(sizeof(int) * x);
	x=0;
    scanf("%d %d",&n,&m);
    int *a = malloc(sizeof(int) * n);
    for(a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int *b = malloc(sizeof(int) * m);
    for(b_i = 0; b_i < m; b_i++){
       scanf("%d",&b[b_i]);
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
			while(l<m)
			{
				if(j%b[l]==0)
				{
					seta = j;
					l++;
				}
				else
				{
					break;
				}
				num[x]=seta;
				x++;
			}
			l=0;
		}
		i=0;
		
	}
	for(i=0;i<x;i++)
	{
		printf("%d ", num[i]);
	}
    return 0;
}
