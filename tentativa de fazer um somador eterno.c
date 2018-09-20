#include <stdio.h>
int main()

{
  int n,soma,i;
  printf("\n entre com um numero");
  scanf("%d",&n);
  i=1;
  soma=0;  
    while(i<=n)
    {
         soma=soma+i;
         i++;
    }
    printf("\n A soma dos N primeiros numeros eh %d",soma);
    system("pause");
    return 0;
    
}
