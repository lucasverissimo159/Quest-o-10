#include <stdio.h>
#include <math.h>
#define PI 3.14159265359
int main(void){
  float R,V;
  printf("\nQual o valor do raio da esfera? ");
  scanf("%f",&R);
  V=4.0/3.0*(PI)*pow(R,3);
  printf("\nO volume dessa esfera é: ");
  printf("≅ %.2fcm³\n",V);
  return 0;
}