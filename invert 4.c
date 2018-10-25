#include <stdio.h>
#include <string.h>
int main()
{
	char palavra[30];
	int i,tam;
	printf("\n Entre com a palavra ");
	gets(palavra);
	 
	tam= strlen(palavra);
	printf("\n tam=%d",tam);
	for(i=(tam-1);i>=0;i--)
	{
	
	printf("%c",palavra[i]);

    
}   
//imprimir em caixa alta//
   for(i=0;i<=tam;i++)
   {
   	if (palavra[i]>=65 && palavra[i]<=90)
	   {
   	printf("%c",palavra[i]);
   }
   else
   {
   	printf("%c",palavra[i]-32);
   }
	   printf("\n\n");
}
system ("pause");
	return 0;
}
