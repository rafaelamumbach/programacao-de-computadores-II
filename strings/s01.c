#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordena_string(char nomes[5][10]){
    int i, j;
    char aux[10];

    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            if (strcmp(nomes[j], nomes[j+1])>0){
                strcpy(aux, nomes[j]);
                strcpy(nomes[j], nomes[j+1]);
                strcpy(nomes[j+1], aux);
            }
        }
    }

}

int main(){
    char nomes[5][10]={"rafa", "carol", "julia", "nicoly", "ana"};
    int i;

    ordena_string(nomes);

    printf("\n");
    for(i=0;i<5;i++){
        printf("%s\n", nomes[i]);
    }

    printf("\n");
    system("pause");
}