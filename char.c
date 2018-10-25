#include <stdio.h>
int main()
{
	char nome[20];

	printf("\n entre com o nome:");
	//scanf ("%s",nome);//
	gets(nome);
	printf("\n Boa noite %s",nome);
    getch();
 	return 0;
}
