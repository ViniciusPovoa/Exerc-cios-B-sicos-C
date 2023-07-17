int main()
{
    int vetor[10], i, x, aux;

    for(i = 0; i<10; i++){
        printf("Digite o valor do vetor na posicao %d", i+1);
        scanf("%d", &vetor[i]);
    }
    for(i=0; i<10; i++){
        for(x = i + 1; x<10; x++){
            if(vetor[i] > vetor[x]){
                aux = vetor[i];
                vetor[i] = vetor[x];
                vetor[x] = aux;
            }
        }
    }
    printf("Ordem crescente : \n");
    for(i=0; i<10; i++){
        printf("%d\n", vetor[i]);
    }
    int valor;

    printf("Digite o valor do vetor que deseja buscar\n");
    scanf("%d", &valor);

    if(valor == vetor[i]){
        printf("%d", vetor[i]);
    }

}