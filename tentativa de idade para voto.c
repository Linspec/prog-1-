#include<stdio.h>
int main()
{
    int n1;
    printf("\n Coloque seua idade:");
    scanf("%d",&n1);
    if(n1<16)
    {
    printf("\n você nao pode votar");
    }
    else if(n1<18)
    {
     printf("\n Seu voto eh facultativo");
     }
    else if(n1<=70)
    {
    printf("\n Seu voto eh obrigatorio");
    }
    else
    {
    printf("\n seu voto nao eh obrigatorio");
    }
    system("pause");
    return 0 ;
}
    
