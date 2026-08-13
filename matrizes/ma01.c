/* Ler valores armazendo-os em uma matriz de 2 linhas por 2 colunas. Mostrar essa matriz na tela. */

#include <stdio.h>

void printaMat(int m[2][2]){    
    int i, j;

    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d", m[2][2]);
        }
        printf("\n");
    }

}

int main(){
    int i, j;
    int m[2][2];

    printf("Informe uma matriz 2x2:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &m[i][j]);
        }
    }
    
    printaMat(m);
}