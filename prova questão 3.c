#include <stdio.h>
int main()
{
    int n,i,total;
    printf("\n escreva um n�mero: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
       total=i*n;
      printf("%d x %d = %d \n",i,n,total);
      }
      system("pause");
      return 0;
    }
