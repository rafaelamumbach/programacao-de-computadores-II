/*Calcule e escreva se uma matriz eh identidade ou nao. Identidade = todos os elementos da diagonal principal sao iguais.*/
#include <stdio.h>
#include <stdlib.h>

#define N 3

int main(){
    int mat[N][N] = {{1,0,0,0},
                     {0,1,0,0},
                     {0,0,1,0},
                     {0,0,0,1}};
    int i, j;
    int identidade = 1;
    
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if (i==j && mat[i][j]!=1){
                identidade = 0;
            } else if(i!=j && mat[i][j] !=0){
                identidade = 0;
            }
        }
    }
    
    if(identidade){
        printf("Matriz identidade.");
    } else {
        printf("Matriz nao identidade.");
    }

    printf("\n");
    system("pause");
}