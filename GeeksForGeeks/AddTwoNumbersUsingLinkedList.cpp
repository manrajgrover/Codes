#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
struct node{
	int data;
	struct node* next;
};
 
struct node *push(struct node *head_r,int data){
	struct node *new_node=(struct node*) malloc(sizeof(struct node));
	new_node->data= data;
	new_node->next= head_r;
	head_r = new_node;
	return head_r;
}
 
void print_list(struct node *head_r){
	struct node *new_node= head_r;
	while(new_node !=NULL){
		printf("%d \t",new_node->data);
		new_node= new_node->next;
	}
	printf("\n");
}
 
struct node *addnums(struct node *head_r1,struct node *head_r2){
	struct node *first=head_r1 , *second=head_r2;
	struct node *head=NULL;
	int sum=0,carry=0;
	while(first!=NULL || second!=NULL){
		sum= carry + (first? first->data:0) + (second? second->data:0);
		carry=((sum>=10)? 1:0);
		sum=sum % 10;
		struct node *new_node = (struct node*) malloc(sizeof(struct node));
		new_node->data=sum;
		new_node->next=head;
		head=new_node;
		first= (first)?first->next:first;
		second= (second)?second->next:second;
	}
	struct node *new_node = (struct node*) malloc(sizeof(struct node));
	new_node->data=carry;
	new_node->next=head;
	head=new_node;
	return head;
}
 
int main(){
	struct node *head1=NULL,*head=NULL,*sum=NULL;
	head1 = push(head1,9);
	head1 = push(head1,8);
	head1 = push(head1,7);
	head1 = push(head1,6);
	head1 = push(head1,5);
	head = push(head,3);
	head = push(head,2);
	head = push(head,1);
	head = push(head,0);
	print_list(head);
	print_list(head1);
	sum = addnums(head,head1);
	print_list(sum);
	return 0; 
}