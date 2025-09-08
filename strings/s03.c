/*Leitura e escruta de uma string pelo metodo gets.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char string[30];
    
    printf("Digite a string: ");
    gets(string);
    printf("%s",string);

    printf("\n");
    system("pause");
}