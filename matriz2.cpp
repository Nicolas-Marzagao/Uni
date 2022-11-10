#include <stdio.h>
#include <string.h>

// Funçao para dar print em um matriz, printMatriz(matriz)

int main() 
{
	// vars
	char	lojas[4][30], produtos[4][15];
	float	precos[4][4];
	int		i, j;
	
	// Pegando Input - LOJAS E PRODUTOS
	for (j=0; j<4; j++) {
		printf("\nDigite o nome da %d loja ", j + 1);
		scanf("%30[^\n]", lojas[j]);
		scanf("%c");
	}	
	for (i=0; i<4; i++) {
		printf("\nDigite o nome da %d produto ", i + 1);
		scanf("%30[^\n]", produtos[i]);
		scanf("%c");
	}
	// Pegando Input - PREÇOS
	j = 0;
	i = 0;
	
	for (j=0; j<4; j++){
		for (i=i; i<4; i++){
			printf("\nDigite o valor do %d produto ", i + 1);
			scanf("%f", precos[j][i]);
		}
	}
	
	// erro input de float n funciona.
	
	// Fazendo print das matrizes
    printf("Mostrando o conteudo da Matriz\n");
	
	//Lojas
	j = 0;
	i = 0;
	
	for (j=0; j<4; j++) {
		printf("%s", lojas[j]);
	}
	for (i=0; i<4; i++) {
		printf("%s", produtos[i]);
	}
	
	// Preços
	j = 0;
	i = 0;
	
    for (j=0; j<4; j++){
        for (i=0; i<4; i++) {
            printf("%f",precos[j][i]);       
		}
	}
	
	
	
}
