#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

struct node{
	struct node* next;
	int data;
	struct node* prev;
};

struct node* head;

int party(int n, int m, int *cityfd, int *v, int *p);

int main(){	
	clock_t begin, end;
	double time_spent;
	begin = clock();
	head = NULL;
	//input	
	int n, m, q;
	int i, j;
	scanf("%d %d %d", &n, &m, &q);
	int *p = malloc(sizeof(n));
	
	for(i=1;i<n;i++){
		scanf("%d", &p[i]);		
	}
	
	int *cityfd = malloc(sizeof(n));
	int type;
	for(j=0;j<n;j++){
		scanf("%d", &type);
		if((type<=m)&&(type>0)){
			cityfd[j] = type;
		}
		else{
			main(); //if the input variable of food types exceeds the number of types, it will again call the main function. 
		}
	}
	
	//printf("\n\nExecuted\n\n");
	
	for(i=0;i<q;i++){
		int c;
		scanf("%d", &c);
		int *v = malloc(sizeof(c));
		for(j=0;j<c;j++){
			scanf("%d", &v[i]);
		}
			party(n,m,cityfd,v,p);
	}
	
	// main processing part(output)
	//Tree Part		
	
	
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("\n\nExecution Time is %f sec", time_spent);
	return 0;
}

int party(int n, int m, int *cityfd, int *v, int *p){
	int i, j, k;
	for(i=0;i<n;i++){
		struct node* temp = (struct node*)malloc(sizeof(struct node));
		struct node* temp2 = (struct node*)malloc(sizeof(struct node));
		struct node* temp3 = (struct node*)malloc(sizeof(struct node));
		temp->data = cityfd[i];
		if(i!=0){
			for(j=0;j<p[i];j++){
				temp->next = temp2;
				temp->prev = temp3;
			}
		}
	}
	return 0;
}