#include<stdio.h>
#define max 100
int stack[max];
	int top=-1;
	void push(int value){
		if(top==max-1){
			printf("stack overflow!\n");
		}else{
			top++;
			stack[top]=value;
                printf("%d pushed .\n",value);
		}
	}
void  pop(){
	if(top==-1){
		printf("stack underflow!\n");
	}else{
		printf("%dpopped.\n",stack[top]);
		top--;
	}
}
int main(){
	push(10);
        push(20);
        push(30);
        pop();
	pop();
        pop();
	pop();
return 0;
}
                    

				
				
				
				
				
				
				



