#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
void enqueue(int value){
	if(rear==MAX-1){
		printf("Queue overflow! cannot insert %d\n",value);
	}
	else {
	if (front==-1) front=0;
	rear++;
	queue[rear]=value;
	printf("%d inseerted into the queue.\n",value);
}
}
void dequeue(){
  if(front==-1 || front>rear){
	printf("queue overflow! No elements to delete\n");
}else{
printf("%d deleted  from queue.\n",queue[front]);
front++;
}
}
void display(){
	if(front==-1 || front>rear){
		printf("queue is empty.\n");
	}else{
	printf("queue elements:");
	for(int i=front;i<=rear;i++)
	{
		printf("%d",queue[i]);
		}
	printf("\n");
}
}
int main() {
	int choice,value;
	while(1){
		printf("\n---Queue Menu---\n");
		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice) {
case 1:
			printf("Enter value to insert:");
			scanf("%d",&value);
			enqueue(value);
			break;
case 2:
			dequeue();
			break;
case 3:
			display();
			break;
case 4:
			exit(0);
			default:
			printf("Invalid choice!Try again.\n");
		}
	}
	return 0;
}
