/*Fazer um programa que leia uma letra (L) e um numero (N), a seguir gere uma string contendo N letras L.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char l;
    int n;
    int i;

    printf("Informe uma letra: ");
    scanf("%c", &l);

    printf("Informe um nro: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("%c", l);
    }

    printf("\n");
    system("pause");
}