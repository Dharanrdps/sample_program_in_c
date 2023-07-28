#include<stdio.h>
int stk[100],ch,n,top,x,i;
void push();
void pop();
void display();
void preek();
int main()
{
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.PREEK\n\t 5.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            	{
            		preek();
            		break;
				}
            case 5:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(ch!=5);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is full");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stk[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is empty");
    }
    else
    {
        printf("\n\t The popped elements is %d",stk[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stk[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}
void preek()
{
	if(top<=-1)
	{
		printf("\n stack is empty");
	}
	else{
	printf("\n\t The preek elements is %d",stk[top]);
	}
}
