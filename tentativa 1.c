#include <stdio.h>
int main()
{
int n1,n2;
float resultado;
printf("\n Ponha um numero;");
scanf("%d",&n1);
printf("\n ponha outro numero;");
scanf("%d",&n2);

resultado=n1+n2;
printf("\nsoma=%.0f\n",resultado);

resultado=n1-n2;
printf("\n subtra�ao=%.0f\n",resultado);

resultado=n1*n2;
printf("\n multiplica�oo=%.0f\n",resultado);

resultado=(float)n1/n2;
printf("\n divisao=%.0f\n",resultado);
system("pause");
return 0;
}

