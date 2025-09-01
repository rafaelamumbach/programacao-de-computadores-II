/*Faca um programa que leia uma matriz M[5][5] e calcule e escreva a soma dos elementos da diagonal principal.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void main(){
    int i, j, mat[N][N], soma=0;
    
    //srand(time(NULL));
    for(i=0;i<N;i++){
        for(j=0; j<N; j++){
            mat[i][j] = rand() % 100;
        }
    }
    
    for(i=0;i<N;i++){
        for(j=0; j<N; j++){
            if(i==j){
                soma+= mat[i][j];
            }
        }
    }
    printf("Soma: %d", soma);
    system("pause");
}
