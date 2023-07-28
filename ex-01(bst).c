#include<stdio.h>
#include<stdlib.h>
struct node(){
	int data;
	struct node* lchild;
	struct node* rchild;
}*Node;

void insert(int data){
	struct *temp,*position,*location;
	temp = (struct node*)malloc(sizeof(struct node));
	if(location!=NULL){
		printf("Already Element presented");
	}
	temp->info = data;
	temp->lchild = NULL;
	temp->rchild = NULL;
	
	if(parent == NULL){
		root=temp;
	}
	else{
		if(data<parent->data){
			parent->lchild=temp;
		}
		else{
			parent->rchild=temp;
		}
	}
}

void display(struct node*ptr , int level){
	
}

int main(){
	int num,choice;
	while(1){
		printf("Enter the number : ");
		scanf("%d",&choice);
		printf("\n1.Enter the element")
		switch(choice){
			case 1:
				insert(data);
				break;
			case 2:
				display(data);
				break;
		}
	}
}           
