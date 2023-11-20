#include<stdio.h>

int main() {
  
  enum meses_e {jan, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez};
  char meses[12][11] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "JUlho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

  int mes = 0;
   printf("Entre com o mes (1 a 12: ");
  int ok = scanf("%i", &mes);

  switch(mes-1) {
    case jan:
    case fev:
    case mar:
    case abr:
    case mai:
    case jun:
    case jul:
    case ago:
    case set:
    case out:
    case nov:
    case dez:

  return 0;
}