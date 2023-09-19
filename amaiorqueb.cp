#include <iostream>
#include <stdio.h>

int main() {
int a, b;

printf("Digite dois valores:\n");
  scanf("%d %d", &a, &b);

if (a < b){
  printf("%d e maior que %d", b, a);
  
} 
if(a > b){
  printf("%d e maior que %d", a, b);

}
  return 0; 
}