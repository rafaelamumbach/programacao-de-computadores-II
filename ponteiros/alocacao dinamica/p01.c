/*
 * @exercicio.:::::::::::: 01
 * @conteudo.::::::::::::: Ponteiros/Alocação dinâmica de memória
 * 
 * @data.::::::::::::::::: 23/04/2026
 * @responsavel.:::::::::: Rafaela Mumbach
 * 
 * @descricao.:::::::::::: Alocação dinâmica de memória para um vetor de inteiros. O programa deve solicitar ao usuário o tamanho do vetor, alocar a memória necessária, preencher o vetor com valores fornecidos pelo usuário e, por fim, exibir os valores armazenados no vetor. Certifique-se de liberar a memória alocada após o uso.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *vetor = (int *)malloc(n * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1; 
    }

    for (int i = 0; i < n; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Valores armazenados no vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("Posição %d: %d\n", i, vetor[i]);
    }

    free(vetor);

    return 0;
}