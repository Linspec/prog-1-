#include <stdio.h>

int main()
{
//variaveis
char palavra[20];
int i, tam;

//palavra
printf ("Insira a palavra - ");
gets (palavra);

tam = strlen(palavra);
printf ("%d", tam);


//condição de inversa
printf ("\nA palavra invertida fica - ");
for (i = tam; i >= 0; i--){
	printf ("%c", palavra[i]);
}

printf ("\n\n");

//tudo CAIXA ALTA
for (i = 0; i < tam; i++){
	if (palavra[i] >= 65 && palavra[i] <= 90){
		printf ("%c", palavra[i]);
	}
	else{
		printf ("%c", palavra[i] - 32);
	}
}

printf ("\n\n");

//tudo caixa baixa
for (i = 0; i < tam; i++){
	if (palavra[i] > 96 && palavra [i] < 122){
		printf ("%c", palavra [i]);
	}
	else {
		if (palavra [i] == 32){
			printf (" ");
			i++;
		}
		printf ("%c", palavra [i] + 32);
	}
}
	
getch();
return 0;	
}
