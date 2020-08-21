#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define MAXSIZE 100

int q[MAXSIZE];
int front = -1,rear = -1;
void linear_queue();
void circular_queue();
void enqueue_for_linear(int);
void dequeue_for_linear();
void traverse();


int main()
{
    int ch1;
    printf("\n       Queue Implementation with array! \n");
    while(1)
    {
        printf("\n1.Linear queue\n2.Circular queue()\n3.EXIT\n4.ENTER YOUR CHOICE:");
        scanf("%d",&ch1);
        switch(ch1)
        {
            case 1: linear_queue();
                    break;
            case 2: circular_queue();
                    break;
            case 3: return 0;
            default: printf("ENTER VALID CHOICE");
        }
    }

    return 0;
}
void linear_queue()
{
   int ch,data;
    while(1)
    {
        printf("\nThe operations are:\n1.Enqueue()\n2.Dequeue()\n3.Traverse()\n4.exit\nENTER YOUR CHOICE:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter the data:");
                    scanf("%d",&data);
                    enqueue_for_linear(data);
                    break;
            case 2: dequeue_for_linear();
                    break;
            case 3: traverse();
                    break;
            case 4: return 0;

        default: printf("Enter the valid choice");
                     break;
        }
    }
}
void circular_queue()
{   //textcolor(RED);
    printf("!!!WORK UNDER PROGRESS !!!");
}

void enqueue_for_linear(int d)
{
    printf("\nEnqueue is the operation where one element is inserted in queue");
    //checking for overflow condition
    if(rear == MAXSIZE -1)    {
        printf("\nQueue is full.");
    }
    if(front == -1)
    {
        front = rear = 0;
        q[rear] = d;
    }
    else
    {
        rear++;
        q[rear] = d;
        printf("\nData Inserted At %d position",rear);
    }
}

void dequeue_for_linear()
{       int item;
        //Checking the underflow condition.
        if(front == -1)
        {
            printf("\nQueue Underflow");
        }
        if(front == rear)
        {
            front =rear =-1;
        }
        else
        {
        item = q[front];
        front++;
        printf("\n%d is the deleted Item",item);
        }
}

void traverse()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d ",q[i]);
    }
}
