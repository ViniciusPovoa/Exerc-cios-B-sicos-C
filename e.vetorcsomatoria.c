#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//Vinícius Horácio Marques Póvoa
int main()
{
   int n;
   do{
    printf("Qual o tamanho do Vetor? ");
    scanf("%d", &n);

    } while (n<1);

    int vetor[n];

    printf("O numero de elementos eh: %d \n ", n);

    int i;
    double a;
    double s = 0;

    for (i = 0; i < n; i++){
        printf("Valor da posicao [%d] = ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    //Faz a somatoria
    for (i = 0; i < n; i++){
        a = vetor[i];
        s = s + (i+1)/a;

        printf("O valor de I eh: %d \n", i);
        printf("O valor de S eh: %lf \n", s);
        printf("\n\n\n");
    }

}
