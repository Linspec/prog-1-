#include<stdio.h>
int main()
{
    int n,i=1,soma=0;
    printf("\n entre com um numero:");
    scanf("%d",&n);
    
    while(i<+n)//while � la�o para manter repetindo at� o chegar num ponto espec�fico//
    {
               soma=soma+i;
               i++;//igual a i+1//
    }
    printf("\n A soma dos %d primeiros numeros = %d \n",n,soma);
    
    system("pause");
    return 0;
}
