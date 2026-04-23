/*
 * @exercicio.:::::::::::: 02
 * @conteudo.::::::::::::: Ponteiros
 * 
 * @data.::::::::::::::::: 17/04/2026
 * @responsavel.:::::::::: Rafaela Mumbach
 * 
 * @descricao.:::::::::::: Construa uma função que retorne os dois dígitos verificadores do cpf informado como parâmetro (inteiro).
*/

#include <stdio.h>

void digitoVerificador(long long int cpf, int *digito1, int *digito2){
    int soma1 = 0, soma2 = 0;

    int peso1[] = {10, 9, 8, 7, 6, 5, 4, 3, 2};
    int peso2[] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2};

    long long int base_cpf = cpf / 100; 
    int digitos[9]; 

    for (int i = 8; i >= 0; i--) {
        digitos[i] = base_cpf % 10;
        base_cpf /= 10;
    }

    for(int i = 0; i < 9; i++){ 
        soma1 += digitos[i] * peso1[i];
        soma2 += digitos[i] * peso2[i];
    }

    *digito1 = (soma1 * 10) % 11;
    if(*digito1 == 10) *digito1 = 0;

    soma2 += (*digito1) * peso2[9];
    *digito2 = (soma2 * 10) % 11;
    if(*digito2 == 10) *digito2 = 0;
}

int main(){
    long long int cpf; 
    int digito1, digito2;

    printf("Digite o CPF (apenas nros): ");
    scanf("%lld", &cpf); 

    digitoVerificador(cpf, &digito1, &digito2);

    printf("Digitos verificadores: %d %d\n", digito1, digito2);

    return 0;
}