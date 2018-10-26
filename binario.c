#include <stdio.h>
int main()
{
    int num,i=0,result,resto,j;
    int binario[16];
    
  printf("entre com um numero decimal: ");
  scanf("%d",&num);
  
 do{
                   result=num/2;
                   resto=num%2;
                   binario[i++]= resto;
                   num=result;
                   }
                   while(result != 1);
                                     binario[i]= 1;
                                     //imprimir na ordem inversa
                                     printf("convertido para binario: ");
                                     
                   for(j=i;j>=0;j--)
                   {
                   printf("%d",binario[j]);
                   }
                   printf("\n\n");
                   
                   
 system("pause");                          
 return 0;                   
 }         
                        
