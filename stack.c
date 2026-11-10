#include<stdio.h>

#define MAXSIZE 10
int stack[MAXSIZE],top=-1;
void Push();
void Pop();
void display();
int main()
{
    int choice;
    do{
        printf("\n-----------Stack Menu--------");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
    {
        case 1: Push(); break;
        case 2: Pop(); break;
        case 3: display(); break;

    }    
}while(choice!=4);

}
void Push()
{
    int n;
    if(top==MAXSIZE-1)
    printf("\n stack is overflow");
    else{
        printf("enter an element for insert");
        scanf("%d",&n);
        top++;
         stack[top]=n;
    }
    
}
void display()
{
    int i;
    if(top==-1)
    printf("\n stack is empty");
else{
    printf("\n stack elements:");
    for(i=top;i<=0;i--)
    printf("%d",stack[i]);
}
}
void Pop()
{
    int n;
    if(top==-1)
    printf("stack is empty ");
else{
    n=stack[top];
    printf("poped element is %d",n);
    top--;
}
}

 

