#include<stdio.h>
int main()
{
    int n=-1,s=0,i=1;
    do
    {
        printf("\n coloque  um numero positivo\n");
        scanf("%d",&n);      
    }while(n<0);
    do
    {
                s=s+i;
                i++;
                printf("#");
    }while(i<=n);
    system("pause");
    return 0;
}
