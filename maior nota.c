#include <stdio.h>
         int main()
         {
             float nota,maior;
             int i;
             maior=-1; 
             for(i=0;i<5;i++) 
             {
                                    printf("\n Entre com a nota %d:",i+1);
                                    scanf("%f",& nota);
                                    if(nota>maior)
                                    {
                                                  maior=nota;
                                    }
             }             

         printf("\n a maior nota = %.2f",maior);
        
                 
         system("pause");
             return 0;
             }
