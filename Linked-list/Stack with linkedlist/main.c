#include<stdio.h>
#include<stdlib.h> //for dynamic memory allocation/

typedef struct node{
int data;
struct node* next;   //self reference NODE;
}NODE;

NODE* top = NULL;
void push(int);
void traverse();
void pop();
int main()
{
    int n,ch;

    while(1)
    {
    scanf("%d",&ch);
    switch(ch)
    {
    case 1: printf("Enter the value:");
            scanf("%d",&n);
            push(n);
            break;
    case 2: traverse();
            break;
    case 3: pop();
            break;
    }
    }
    return 0;
}
void push(int d)
{
    NODE* temp;
    temp = (NODE*)malloc(sizeof(NODE));
    temp->data = d;
    temp->next = top;
    top = temp;
    printf("Item Pushed");

}
void traverse()
{
    NODE* temp;
    temp = top;
    /*if(temp == NULL)
        printf("\nEmpty");
    else{
        printf("%d ",temp->data);
        traverse(temp->next);
    }*/
    while(temp!= NULL)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }
}
void pop()
{
    int item;
    item = top->data;
    NODE* p;
    p = top;
    top = top->next;
    free(p);
    printf("\n%d",item);
}

