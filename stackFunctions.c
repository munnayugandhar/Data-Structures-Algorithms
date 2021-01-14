#include <stdio.h>
#define SIZE 5


void push();
void pop();
void peek();
void traverse();

int stack[SIZE],top=-1;

int main()
{
    
    int ch,ele;
    while(1)
    {
        printf("Stack operations :\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Peek\n");
		printf("4. Display\n");
		printf("5. Quit\n");
		
		printf("Enter your choice : ");
		scanf("%d", &ch);
    
        switch(ch)
        {
            case 1: push();
                    break;
                    
            case 2: pop();
                    break;
            
            case 3: peek();
                    break;
                    
            case 4: traverse();
                    break;
                    
            case 5: break;
            
            default: printf("Please select valid option\n");
                    
        }
    }

    return 0;
}



void push()
{
    if (top==SIZE-1)
    {
        printf("Stack is Full\n");
        
    }
    else
    {
        int ele;
        printf("Enter element to be inserted\n");
        scanf("%d",&ele);
        top = top +1;
        stack[top]=ele;
        printf("Element inserted successfully\n");
        
    }
}


void pop()
{
    if (top==-1)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("Popped Element is %d\n",stack[top]);
        top=top-1;
        
    }
}


void peek()
{
	if(top==-1)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		printf("Peek : %d \n", stack[top]);
	}	
}


void traverse(void)
{
	if(top==-1)
	{
		printf("Stack is Empty \n");
	}
	else
	{
		int i;
		printf("Stack elements are :\n");
		for(i=top ; i<=0 ; --i)
		{
			printf("%d \n", stack[i]);
		}
	}
}