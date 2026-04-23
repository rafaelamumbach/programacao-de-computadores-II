/*
 * @exercicio.:::::::::::: 01
 * @conteudo.::::::::::::: Ponteiros
 * 
 * @data.::::::::::::::::: 17/04/2026
 * @responsavel.:::::::::: Rafaela Mumbach
 * 
 * @descricao.:::::::::::: Construa uma função que troque o valor de duas variáveis inteiras informadas como parâmetro.
*/

#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a; // temp=5
    *a = *b;       // a=10
    *b = temp;     // b=5
}

int main() {
    int x = 5, y = 10;

    printf("Antes da troca: x = %d, y = %d\n", x, y);
    
    trocar(&x, &y); // chamada da funcao

    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;
}