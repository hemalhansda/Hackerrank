#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <conio.h>
int main(){
    int i,j,k,l,seta,setb,digit;
	int a_i, b_i;
	i=0;
	l=0;
	seta=0;
	setb=0;
	digit=0;
	int n; 
    int m;
	int x;
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
			if(j%a[i]==0)
			{
				seta = 1;
				i++;
			}
			else
			{
				seta = 0;
				break;
			}
		}
		i=0;
		while(l<m&&seta==1)
		{
			if(b[l]%j==0)
			{
				setb = 1;
				l++;
			}
			else
			{
				setb = 0;
				break;
			}
		}
		l=0;
		if((seta==1)&&(setb==1))
		{
			digit = digit + 1;
		}
	}
	printf("%d", digit);
	getch();
    return 0;
}
