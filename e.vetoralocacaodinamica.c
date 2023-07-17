#include <stdio.h>
#include <stdlib.h>


int main(){


 int *p;
 int i, quantelementos;

 printf("Digite a quantidade de elementos do vetor\n");
 scanf("%d", &quantelementos);

 p = (int*) malloc (quantelementos * sizeof(int));

 if(p == NULL){
    printf("Erro na alocacao de memoria");
    exit(1);
 }


 for(i=0; i<quantelementos; i++){
    printf("Digite o numero para o indice %d\n", i+1);
    scanf("%d", &p[i]);
 }

 for(i=0; i<quantelementos; i++){
    printf("Valor armazenado em i[%d] = %d\n", i+1, p[i]);
    }

    free(p);
 }