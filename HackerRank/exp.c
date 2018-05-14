#include<stdio.h>
int main()
{
	int n,m,j;
	scanf("%d", &n);
	scanf("%d", &m);
	for(int i=0;i<2;i++)
	{
	 while(j<m)
	 {
		 if(n==1)
		 {
			 break;
		 }
		 printf("I'm in while.\n");
		 j++;
	 }
	 j=0;
	 printf("Exp\n");
	}
}