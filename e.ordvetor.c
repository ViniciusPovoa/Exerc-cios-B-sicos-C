
#include <stdio.h>
#include <stdlib.h>
int main()
{
 float vetor[20];
 int aux;

 for (int i =0; i < 20; i++ ){
    printf("Digite o numero do vetor %d: ", i);
    scanf("%f", &vetor[i]);

 }

 for (int x = 0; x < 20; x++){
    for(int y = x; y < 20; y++){
        if(vetor[x] > vetor[y]){
            aux = vetor[x];
            vetor[x] = vetor [y];
            vetor[y] = aux;

        }
    }
 }
 for ( int i=0; i < 20; i++){
    printf("O vetor %d eh: %f \n", i, vetor[i]);
 }
}

