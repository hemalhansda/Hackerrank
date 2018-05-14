#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int n, arr[50], i, q, r, a, t1, t2, t3, temp;
	printf("INPUT:\n");
	printf("========\n");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
		if(arr[i]>100||arr[i]<0)
		{
			printf("Wrong Input!");
			exit(0);
		}
	}	
	for(i=0;i<n;i++)
	{
		a = arr[i];
		t1 = a%10;
		if(a>=38)
		{
			if(t1==3||t1==8)
			{
				a = a + 2;
				arr[i] = a;
			}
			else if(t1==4||t1==9)
			{
				a = a + 1;
				arr[i] = a;
			}
		}
	}
	printf("\nOUTPUT:\n");
	printf("========\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n", arr[i]);
	}
	getch();
	return 0;
}