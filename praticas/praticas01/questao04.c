#include <stdio.h>

#define ICMS 0.17f
#define COFINS 0.076f
#define PIS_PASEP 0.0165f

int main() {
 float preco_inicial = 100.0f;

  float valor_icms = preco_inicial * ICMS;
  float valor_cofins = preco_inicial * COFINS;
  float valor_pispasep = preco_inicial * PIS_PASEP;

  float preco_final = (1 + ICMS + COFINS + PIS_PASEP) * preco_inicial;

  printf("O preco incial é %f\n", preco_inicial);
  printf("O valor ICMS é %f\n", valor_icms);
  printf("O valor COFINS é %f\n", valor_cofins);
  printf("O valor PISPASEP é %f\n", valor_pispasep);
  printf("O preco final é %f\n", preco_final);
  
  return 0;
}