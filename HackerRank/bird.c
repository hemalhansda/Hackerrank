#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int migratoryBirds(int n, int* ar) {
	int flag = 0;
	int type[6];
	int i,j;
	for(i=0;i<=5;i++){
		type[i]=0;
	}
	for(i=1;i<=5;i++){
		for(j=0;j<n;j++){
			if(ar[j]==i){
				type[i]=type[i]+1;
			}
		}
	}
	for(i=1;i<=5;i++){
		if(type[i]>flag){
			flag = i;
		}
		else if(type[i]==flag && (i<flag)){
			flag = i;
		}
		else if(type[i]==flag && (i>flag)){
			flag = flag;
		}
		else{
			flag = flag;
		}
	}
	return flag;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = migratoryBirds(n, ar);
    printf("%d\n", result);
    return 0;
}