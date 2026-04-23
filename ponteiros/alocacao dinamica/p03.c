/*
 * @exercicio.:::::::::::: 03
 * @conteudo.::::::::::::: Ponteiros/Alocação dinâmica de memória
 * 
 * @data.::::::::::::::::: 23/04/2026
 * @responsavel.:::::::::: Rafaela Mumbach
 * 
 * @descricao.:::::::::::: Exemplo de alocação dinâmica de memória utilizando as funções malloc() e calloc().
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p1, *p2; // dois ponteiros para inteiros

    p1 = (int*)malloc(20); // reserva um bloco de 20 bytes. a memória não é limpa, contém valores aleatórios.
    p2 = (int*)calloc(5, sizeof(int)); // reserva espaço para 5 elementos de tamanho inteiro. 20 bytes. a memória é zerada. recebe qtde e tamanho.

    return 0;
}