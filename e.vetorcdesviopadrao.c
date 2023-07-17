#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
//Vinícius Horácio Marques Póvoa

int main()
{
    int i, n;
    float media, dp;
    media = 0.0;
    dp = 0.0;

   do{
    printf("Qual o tamanho do Vetor? ");
    scanf("%d", &n);

    } while (n<1);

    int vetor[n];

    printf("O numero de elementos eh: %d \n ", n);

    for (i = 0; i < n; i++){
        printf("Valor da posicao [%d] = ", i+1);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < n; i++){
        media = media + vetor[i];
    }
    media = media / n;
    dp = 0.0;
    for (i = 0; i < n; i++){
        dp = dp + pow(vetor[i] - media,2);
    }
    dp = sqrt(dp/(n-1));

        printf("A media eh: = %f, O desvio padrao eh: = %f", media, dp);
    }


