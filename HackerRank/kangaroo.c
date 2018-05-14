#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define infinity 10000
int main(){
    int i,flag;
    int x1; 
    int v1; 
    int x2; 
    int v2;
    flag = 0;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    while(i<infinity)
    {
        x1=x1+v1;
        x2=x2+v2;
        i++;
        if(x1==x2)
        {
            printf("YES");
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        printf("NO");
    }
    return 0;
}
