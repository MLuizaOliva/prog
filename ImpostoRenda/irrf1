/* Maria Luiza Oliva Santos - 202320113
   Parte 1
   Entrar com o valor do salário Bruto:
   Calcular o IRPF de acordo com suas faixas;
   Apresentar o valor a ser pago e os limites;
   Apresentar total do IRPF a ser descontado;
   Apresentar o valor do salário líquido;
   Algoritmo do código desenvolvido.

   valores retirados do site
   "https://www.creditas.com/exponencial/tabela-imposto-de-renda/"

*/

#include <stdio.h>

int main() {
  float salario, irrf, salarioLiquido;
  int faixa;

  printf("Digite o valor do salario bruto: ");
  scanf("%f", &salario);

  if (salario <= 2259.20) {
    faixa = 1;
    irrf = salario * 0;
  } else if (salario >= 2259.21 && salario <= 2826.65) {
    faixa = 2;
    irrf = salario * 0.075;
  } else if (salario >= 2826.66 && salario <= 3751.05) {
    faixa = 3;
    irrf = salario * 0.15;
  } else if (salario >= 3751.06 && salario <= 4664.68) {
    faixa = 4;
    irrf = salario * 0.225;
  } else if (salario > 4664.68) {
    faixa = 5;
    irrf = salario * 0.275;
  }

  salarioLiquido = salario - irrf;

  printf("Faixa: %d\n", faixa);
  printf("Imposto a ser pago: R$ %.2f\n", irrf);
  printf("Salario liquido: R$ %.2f\n", salarioLiquido);

  return 0;
}
