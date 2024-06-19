/* Maria Luiza Oliva Santos - 202320113
segunda parte

Pesquisar e calcular "elementos" que incidem na folha de pagamento do empregado:
Pesquisar quais taxas, impostos e outras que incidem ou creditam ao calculo
salarial do empregado; Apresentar "elementos" e seis valores que
creditam/debitam do empregado; Apresentar totais;

Algoritmo do código desenvolvido.

+ Primeira Parte;
*/

#include <stdio.h>

int main() {
  float salario, irrf, salarioLiquido, inss, fgts, valeTransporte, valeRefeicao,
      planoSaude;
  int faixa;

  printf("Digite o valor do salario bruto: ");
  scanf("%f", &salario);

  // Calculo do IRRF
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
  // Calculo do INSS
  if (salario >= 20000.00) {
    inss = 3200.00;
  } else if (salario >= 10000.00) {
    inss = salario * 0.14;
  } else if (salario >= 5500.00) {
    inss = salario * 0.12;
  } else if (salario >= 2500.00) {
    inss = salario * 0.09;
  } else {
    inss = salario * 0.075;
  }

  fgts = salario * 0.08; //8% do salario

  // Beneficios
  valeTransporte = salario * 0.06; // O valor do vale transporte é de 6% do salario
  valeRefeicao = 10 * 22; //Supondo um valor de R$10 por dia útil
  planoSaude = 250.00;
  salarioLiquido = salario - irrf - inss + valeTransporte + valeRefeicao - planoSaude;

  printf("Faixa: %d\n", faixa);
  printf("Imposto de renda: R$ %.2f\n", irrf);
  printf("Contribuicao INSS: R$ %.2f\n", inss);
  printf("FGTS: R$ %.2f\n", fgts);
  printf("Plano de Saude: R$ %.2f\n", planoSaude);
  printf("Vale Transporte: R$ %.2f\n", valeTransporte);
  printf("Vale Refeicao: R$ %.2f\n", valeRefeicao);
  printf("Salario liquido: R$ %.2f\n", salarioLiquido);

  return 0;
}
