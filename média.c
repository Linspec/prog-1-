#include <stdio.h>
int main()
 {
          float nota,maior,menor,soma,media;
          int i;
          maior=5;
          menor=9999;
          for (i=0;i<5;i++)
          {
                           printf("Entre com a nota %d:",i+1);
                           scanf("%f",&nota);
                           if(nota>maior)
                           {
                                       maior=nota;
                           }
                           if(nota<menor)
                           {
                                       menor=nota;
                           }
                           {
                                       soma=soma+nota;
                           } 
          }           
              media=soma/i;
              
              printf("\n A menor nota eh %.2f",menor);
              printf("\n A maior nota eh %.2f",maior);
              printf("\n Media da turma =%.2f",media);
              system("pause");
              return 0;
 } 
