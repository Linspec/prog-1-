#include <stdio.h>
int main()
{
    float  cand1,cand2,total;
    printf("\n entre com os votos candidato 1:");
    scanf("%f,&cand1);
    
     printf("\n entre com os votos candidato 2:");
    scanf("%f,&cand2");
    
    total=cand1+cand2;
    
    printf("\n percentual de votos do candidato1: %.2f",cand1/total*100);
    printf("\n percentual de votos do candidato2: %.2f",cand2/total*100);
     
    if(cand1>cand2)
     printf("\n Candidato 1 venceu as elei��es com %.2f%%",cand1/total*100);
   else if(cand2>cand1)  
     printf("\n Candidato 1 venceu as elei��es com %.2f%%",cand1/total*100);
   else
   printf("\n Elei��es empatadas!");
   
   system("pause");
   return 0; 
   }
