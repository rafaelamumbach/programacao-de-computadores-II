/* Ler 3 notas para cada um dos 10 alunos de uma turma. Após para cada aluno escreva as suas 3 notas e a média aritmética dessas notas. */

#include <stdio.h>

void informaMedia(float notas[10][3]){
    int i, j;
    float soma=0;
    for(i=0; i<10; i++){
        soma = 0;
        printf("Aluno [%d]: ",i+1);

        for(j=0;j<3;j++) {
            printf("%2.1f ",notas[i][j]);
            soma = soma + notas[i][j];
        }
        printf("media = %2.1f", soma/3);
        printf("\n");
    }
}

int main(){
    int i, j;
    float soma=0;
    float notas[10][3] = {
        {8.5, 4.2, 7.1},
        {6.3, 9.0, 2.8},
        {5.5, 1.4, 8.9},
        {3.7, 7.6, 5.0},
        {9.8, 6.1, 3.3},
        {2.5, 8.2, 6.7},
        {4.9, 1.1, 9.5},
        {7.3, 5.8, 4.0},
        {1.9, 8.7, 6.4},
        {5.2, 3.1, 9.9}
    };

    informaMedia(notas);
}