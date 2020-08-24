#include <stdio.h>
#include <stdlib.h>
void toh(int,char,char,char);
int main()
{
    int n;
    char primary = 'P',temporary='T',destination='D';
    printf("TOWER OF HANOI\n");
    printf("\nEnter the Disks:");
    scanf("%d",&n);
    toh(n,primary,temporary,destination);
    return 0;
}
void toh(int n,char p,char t, char d)
{
    if(n==1)
        printf("%c -> %c\n",p,d);
    else{
            toh(n-1,p,d,t);
            printf("%c -> %c\n",p,d);
            toh(n-1,t,p,d);

        }
}
