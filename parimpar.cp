#include <iostream>
#include <stdio.h>

int main() {
int numero;

printf("Digite um numero\n");
  scanf("%d", &numero);

if (numero % 2 == 0){
  printf("O numero e par");
  
} 
if(numero % 2 == 1){
  printf("O numero e impar");

}
  return 0; 
}