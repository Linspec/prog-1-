#include <stdio.h>
#include <string.h>
int main()
{
    int i,tam,cont=0 ;
    char tweet[140];
    
    printf(" escreva um tweet de até 140 caracteres");
    gets(tweet);
    
    //contar hastag
   for(i=0;i<=140;i++){
                       if(tweet[i] ==35)
                       cont++;
                       }
                       printf("\n foi encontrado %d tralhas",cont);

system("pause");                          
 return 0;                   
 }         
