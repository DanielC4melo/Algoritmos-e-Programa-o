#include <iostream>

int main() {
//ex5

  //e = esfirras 
  //K = kibes
  //S = sucos
  int e, k ,s; 
  float total;
  printf("Bem-vindo ao areabe! voce gostaria de quantas esfirras\nCada uma custa R$6,50.");
  scanf("%d", &e);

  printf("Voce gostaria de quantos kibes\nCada um custa R$5,50");
  scanf("%d", &k);

  printf("Voce gostaria de quantos sucos\nCada um custa R$3,00");
  scanf("%d", &s);

  total = e * 6.50 + k *5.50 + s * 3.00;

  printf("O total a pagar sera de R$%.2f", total);


return 0;
}