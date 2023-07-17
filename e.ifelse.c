#include <stdio.h>
#include <stdlib.h>
//Vinícius Horácio Marques Póvoa
int main()
{
 char tipo;
 int qq;
 int preco;





 printf("Qual tipo de grao voce deseja saber o preco?\n (A) Tipo A \n (B) Tipo B \n (C) Tipo C \n (D) Tipo D \n");
 scanf("%c", &tipo);

  printf("Digite a quantidade de quebrados");
  scanf("%d", &qq);



 if (tipo == 'A' && qq == 3)
    printf("O preco da saca eh 170");
 else if (tipo == 'A' && qq == 4)
    printf("O preco da saca eh 151,30");
 else if (tipo == 'A' && qq == 5)
    printf("O preco da saca eh 139,20");
 if (tipo == 'a' && qq == 3)
    printf("O preco da saca eh 170");
 else if (tipo == 'a' && qq == 4)
    printf("O preco da saca eh 151,30");
 else if (tipo == 'a' && qq == 5)
    printf("O preco da saca eh 139,20");
 if (tipo == 'B' && qq == 3)
    printf("O preco da saca eh 153,00");
 else if (tipo == 'B' && qq == 4)
    printf("O preco da saca eh 136,17");
 else if (tipo == 'B' && qq == 5)
    printf("O preco da saca eh 125,28");
 if (tipo == 'b' && qq == 3)
    printf("O preco da saca eh 153,00");
 else if (tipo == 'b' && qq == 4)
     printf("O preco da saca eh 136,17");
 else if (tipo == 'b' && qq == 5)
    printf("O preco da saca eh 125,28");
 if (tipo == 'C' && qq == 3)
    printf("O preco da saca eh 139,23");
 else if (tipo == 'C' && qq == 4)
    printf("O preco da saca eh 123,91");
 else if (tipo == 'C' && qq == 5)
    printf("O preco da saca eh 112,76");
 if (tipo == 'c' && qq == 3)
    printf("O preco da saca eh 139,23");
 else if (tipo == 'c' && qq == 4)
    printf("O preco da saca eh 123,91");
 else if (tipo == 'c' && qq == 5)
    printf("O preco da saca eh 112,76");
 if (tipo == 'D' && qq == 3)
    printf("O preco da saca eh 128,09");
 else if (tipo == 'D' && qq == 4)
    printf("O preco da saca eh 117,84");
 else if (tipo == 'D' && qq == 5)
    printf("O preco da saca eh 104,88");
 if (tipo == 'd' && qq == 3)
    printf("O preco da saca eh 128,09");
 else if (tipo == 'd' && qq == 4)
    printf("O preco da saca eh 117,84");
 else if (tipo == 'd' && qq == 5)
    printf("O preco da saca eh 104,88");


 }

