#include <stdio.h>
#include <string.h>
int main()
{
	char palavra[30];
	int i,tam;
	printf("\n Entre com a palavra ");
	gets(palavra);
	 
	tam= strlen(palavra);
	printf("tam=%d",tam);
	for(i=(tam-1);i>=0;i--)
	{
		
	printf("%c",palavra[i]);
}   
printf("\n\n");
system ("pause");
	return 0;
}
