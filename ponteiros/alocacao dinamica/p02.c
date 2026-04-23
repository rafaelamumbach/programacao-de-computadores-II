/*
 * @exercicio.:::::::::::: 02
 * @conteudo.::::::::::::: Ponteiros/Alocação dinâmica de memória
 * 
 * @data.::::::::::::::::: 23/04/2026
 * @responsavel.:::::::::: Rafaela Mumbach
 * 
 * @descricao.:::::::::::: Aritmética de ponteiros e alocação dinâmica.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p; // declara um ponteiro chamado 'p' que pode guardar o endereço de um inteiro

    p = (int*)malloc(20); 
    p++;
    p++;

    return 0;
}

/*  
    malloc(20) reserva 20 bytes de memória RAM.
    Como um 'int' geralmente ocupa 4 bytes, isso reserva espaço para 5 inteiros (20 / 4 = 5).
    (int*) é um cast (conversão) para dizer que trataremos esse bloco como memória de inteiros.
*/

 /*
    p++ move o ponteiro para o PRÓXIMO endereço de inteiro.
    Não pula 1 byte, pula o tamanho de um 'int' (4 bytes).
    Se p estava no endereço 1000, agora está no 1004.
*/
/*
    p++ move o ponteiro novamente.
    Agora p aponta para o endereço 1008 (o terceiro espaço de inteiro do bloco).
*/