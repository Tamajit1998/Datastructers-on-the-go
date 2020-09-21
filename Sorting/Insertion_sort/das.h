#ifndef DAS_H_INCLUDED
#define DAS_H_INCLUDED

void array_insert(int* arr,int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("Enter Your Number at position %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");

}
void display(int* arr,int n)
{
    int i;
    printf("The numbers are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void swap(int*x ,int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

#endif // DAS_H_INCLUDED
