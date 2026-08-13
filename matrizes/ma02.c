/* Ler 3 notas para cada um dos 3 alunos de uma turma. Após para cada aluno escreva as suas 3 notas e a média aritmética dessas notas. */

#include <stdio.h>

int main(){
    int i, j;
    float soma=0;
    float notas[10][3];

    for(i=0; i<5; i++){
        for(j=0;j<3;j++){
            printf("Aluno [%d] informe a nota [%d]: ",i+1, j+1);
            scanf("%f",&notas[i][j]);
            printf("\n");
        }
    }

    for(i=0; i<5; i++){
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