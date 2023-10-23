#include <stdio.h>

int main() {
  float peso = 0.0f;
  float altura = 0.0f;
  
  printf("Entre com o seu peso em kg:");
  leu_certo = scanf("%f", &peso);
  while (peso <=0) {
    getchar();
    printf("Peso invalido. Tente novamente:");
    leu_certo = scanf("%f", &peso);
  }
  
  printf("Entre com a sua altura em m:");
  leu_certo = scanf("%f", &altura);

    while  (altura <= 0) {
    getchar();
    printf("Altura invalida. Tente novamente:");
    leu_certo = scanf("%f", &altura);
  }

  float imc = peso / altura * altura;
  printf("Seu imc é %.1f\n", imc);
  
  
    return 0;
  }