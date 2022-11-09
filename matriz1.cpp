// matriz1.c


#include <stdio.h>

int main() 
{	
	// Criação da matriz
    int M[3][4]; 
	int i, j;
    
    // Pegando informaçoes para prencher a matriz 
    for (i=0; i<3; i++) {
        for(j=0; j<4; j++) {
            //printf("Digite a posicao [%d][%d] da matriz = ", i, j);
            //scanf("%d", &M[i][j]);
            M[i][j] = 0;
        }
        printf("\n");
    }
    // Fazendo print da matriz
    printf("Mostrando o conteudo da Matriz\n");
    printf("------------\n");
    
    for (i=0; i<3; i++){
        for (j=0; j<4; j++) {
        	printf("|");
            printf("%d",M[i][j]);
			printf("|");       
		}
		printf("\n");
        printf("------------\n");
	}
    return 0;
    
}
