/*Estrutura basica. Le e printa uma matriz informada pelo usuario.*/
#include <stdio.h>
#include <stdlib.h>

#define N 5

void le_matriz(int mat[N][N]){
    int i,j;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

void printa_matriz(int mat[N][N]){
    int i,j;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("% 4d", mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int mat[N][N];

    le_matriz(mat);
    printa_matriz(mat);

    printf("\n\nFim.\n\n");
    system("pause");
}