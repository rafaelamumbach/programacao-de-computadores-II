#include <stdio.h>
#include <stdlib.h>

void le_matriz(int mat[2][2]){
    int i,j;

    printf("Digite os elementos da matriz 2x2: ");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

void printa_matriz(int mat[2][2]){
    int i,j;

    printf("\nMatriz digitada:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("% 4d", mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int mat[2][2];

    le_matriz(mat);
    printa_matriz(mat);

    printf("\n\nFim.\n\n");
    system("pause");
}