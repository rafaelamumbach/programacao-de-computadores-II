/*Faca um programa que leia uma matriz M[5][5] e calcule e escreva a soma dos elementos da diagonal principal.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

void main(){
    int i, j, mat[N][N], soma=0;
    
    for(i=0;i<N;i++){
        for(j=0; j<N; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("\nMatriz informada: \n");
    for(i=0;i<N;i++){
        for(j=0; j<N; j++){
            printf("% 4d", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for(i=0;i<N;i++){
        for(j=0; j<N; j++){
            if(i==j){
                soma+= mat[i][j];
            }
        }
    }

    printf("Soma: %d", soma);
    printf("\n");
    system("pause");
}
