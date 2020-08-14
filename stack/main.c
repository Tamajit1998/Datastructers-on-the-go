#include<stdio.h>
void push(int s[] ,int );
void pop(int s[]);
void traverse(int s[]);
int top =-1;

int main()
{
	int s[100],n,c;
	int choice;
	scanf("%d",&n);
	c = n;
	while(c!=0)
    {
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push(s,n);
                    break;
            case 2: pop(s);
                    break;
            case 3: traverse(s);
                    break;
        default: printf("Enter Valid choice:");
                 break;

        }
        printf("counter:%d\n",c);
        c--;

    }
    return 0;
}
void push(int s[], int n)
{
    int ch;
    if(top == n-1)
    {
        printf("Stack Overflow");
    }
    else
    {
       top++;
        scanf("%d",&ch);
        s[top] = ch;
    }
}
void pop(int s[])
{
    int x;
    if(top == -1)
        printf("The stack  underflows");
    else
    {
        x = s[top];
        top--;
        printf("%d\n",x);
    }
}
void traverse(int s[])
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("%d\n",s[i]);
    }
}
