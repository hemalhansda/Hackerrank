#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,j;
	int apphouse, orghouse, aph, orh;
	apphouse = 0;
	orghouse = 0;
	int s; 
    int t; 
    scanf("%d %d",&s,&t);
    int a; 
    int b; 
    scanf("%d %d",&a,&b);
    int m; 
    int n; 
    scanf("%d %d",&m,&n);
    int *apple = malloc(sizeof(int) * m);
    for(i=0;i<m;i++){
       scanf("%d",&apple[i]);
    }
    int *orange = malloc(sizeof(int) * n);
    for(j=0;j<n;j++){
       scanf("%d",&orange[j]);
    }
	for(i=0;i<m;i++)
	{
		aph = a+apple[i];
		if(aph>=s&&aph<=t)
		{
			apphouse = apphouse + 1;
		}			
	}
	for(i=0;i<m;i++)
	{
		orh = b+orange[i];
		if(orh>=s&&orh<=t)
		{
			orghouse = orghouse + 1;
		}			
	}
	printf("%d\n", apphouse);
	printf("%d", orghouse);
    return 0;
}
