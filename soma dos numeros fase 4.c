#include <stdio.h>
int main ()
{
    int n,i=1,s=0;
    printf("\nEscreva um numero:\n");
    scanf("%d",&n);
    
    do
    {
        s=s+i;
        i++;
    }
    while(i<=n);
    printf("\n  %d  \n",s);
    system("pause");
    return 0;
}
