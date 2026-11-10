#include<stdio.h>

#define MAXSIZE 10
int queue[MAXSIZE],rear=-1,front=0;
void insert();
void delete1();
void display();
void temp();
int main()
{
    int choice;
    do{
        printf("\n-----------Queue Menu--------");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice)
    {
        case 1: insert(); break;
        case 2: delete1(); break;
        case 3: display(); break;
        case 5: temp(); break;

    }    
}while(choice!=4);

}
void insert()
{
    int n;
    if(rear==MAXSIZE-1)
    printf("\n queue is overflow");
    else{
        printf("enter an element for insert");
        scanf("%d",&n);
        rear++;
         queue[rear]=n;
    }
    
}
void display()
{
    int i;
    if(front>rear)
    printf("\n queue is empty");
else{
    printf("\n queue elements:");
    for(i=front;i<=rear;i++)
    printf("%d",queue[i]);
}
}
void delete1()
{
    int n;
    if(front>rear)
    printf("queue i empty ");
else{
    n=queue[front];
    printf("deleted element is %d",n);
    front++;
}
}
void temp()
{
    int i;
    for(i=5;i>=0;i--)
    printf("%d",queue[i]);
}
 

