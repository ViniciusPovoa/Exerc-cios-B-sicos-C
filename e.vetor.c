#include <stdio.h>
#include <stdlib.h>
//Vinícius Horácio Marques Póvoa
int main(){

  int i,j,num,vetor[10], rp = 0;

  for(i = 0; i <= 10; i++){
  printf("Digite os numeros\n");
  scanf("%d", &num);

  for(j = 0; j <= i-1 ; j++){
  if(num == vetor[j]){
  rp = 1;
  break;
 }
}

 if(rp == 1){
 printf("O numero %d eh repetido, digite novamente outro numero \n", num);
 rp = 0;
 i -= 1;
 }else{
 vetor[i] = num;
 }

}

 for(i = 0; i <= 10; i++){
 printf("[Vetor %d] = %d ",i, vetor[i]);
    }

    return 0;
}
