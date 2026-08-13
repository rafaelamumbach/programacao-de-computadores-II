/* Fazer um algoritmo que leia um numero inteiro positivo, armazene os digitos do mesmo em uma string e escreva-a. */

#include <stdio.h>
#include <string.h>

int main(){
    int num;
    char s[20];

    scanf("%d", &num);
    sprintf(s, "%d", num); // adiciona um numero a uma string. onde s = nome da string.
    printf("string que tem numero: %s\n", s);
}