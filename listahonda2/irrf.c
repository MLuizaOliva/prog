/* Maria Luiza Oliva Santos - 202320113
   Parte 3

Incluir primeira e segunda parte;
Pesquisar quais taxas, impostos e outras que incidem ou creditam ao calculo salarial do empregado e do empregador;
Apresentar "elementos" e seis valores que creditam/debitam do empregado e do empregador;
Apresentar totais;
Algoritmo do código desenvolvido.

*/

#include <stdio.h>

int main() {
    float salario, irrf, salarioLiquido, inss, fgts, valeTransporte, valeRefeicao;
    float rat, sistemaS, salarioEducacao;
    int faixa;

    printf("Digite o valor do salario bruto: ");
    scanf("%f", &salario);

    // IRRF
    if (salario <= 2259.20) {
        faixa = 1;
        irrf = salario * 0;
    }else if (salario >=2259.21 && salario <= 2826.65) {
        faixa = 2;
        irrf = salario * 0.075;
    } else if (salario >=2826.66 && salario <= 3751.05) {
        faixa = 3;
        irrf = salario * 0.15;
    } else if (salario >=3751.06 && salario <= 4664.68) {
        faixa = 4;
        irrf = salario * 0.225;
    } else if (salario > 4664.68){
        faixa = 5;
        irrf = salario * 0.275;
    }

    // INSS
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

    // FGTS
    fgts = salario * 0.08;

    // Beneficios
    valeTransporte = salario * 0.06; // O valor do vale-transporte é de 6% do salário
    valeRefeicao = 10 * 22; // Supondo um valor de R$20 por dia útil

    // Custo do empregador
    rat = salario * 0.03; // Supondo uma alíquota de 3%
    sistemaS = salario * 0.05; // Supondo uma alíquota de 5%
    salarioEducacao = salario * 0.025; // Alíquota de 2,5%

    salarioLiquido = salario - irrf - inss + valeTransporte + valeRefeicao;

    printf("Faixa: %d\nImposto a ser pago: R$ %.2f\nContribuicao INSS: R$ %.2f\nFGTS: R$ %.2f\nvale transporte: R$ %.2f\nvale refeicao: R$ %.2f\nSalario liquido do funcionario: R$ %.2f\n\nCustos do empregador:\nRAT: R$ %.2f\nSistema S: R$ %.2f\nSalario Educacao: R$ %.2f\nCusto total do empregador: R$ %.2f\n",
        faixa, irrf, inss, fgts, valeTransporte, valeRefeicao, salarioLiquido, rat, sistemaS, salarioEducacao, salarioLiquido + rat + sistemaS + salarioEducacao);
    
    return 0;
}


