#include<stdio.h>
int main()
{
    int n,i,soma=0;
    
    printf("\n Coloque um numero:\n");
    scanf("%d",&n);
    
     for(i=1;i<=n;i++)
    {
                            soma=soma+i;
    }
printf("\ soma dos %d primeiros numeros =%d\n",n,soma);
system("pause");
return 0;
}
