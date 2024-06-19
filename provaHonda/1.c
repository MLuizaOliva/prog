/*Desenvolva um programa, atenção utilizar regra UESC (indicando referência e
considerando casas decimais e aproximação dos valores), que receba os valores e
calcule: a) De acordo com a matéria, especifique o número de créditos a serem
realizados (mínimo 2 e máximo 10); b)Deve ser calculado a média, indicando a
situação do aluno e o resultado; c) Deve calcular a nota para Prova Final;
d)Considerar o número de faltas para o resultado final, considere cada crédito
15 horas-aula; e) Apresentar ficha de avaliação do aluno, com todas notas,
situação e médias;*/

// creditos 3
// media 7
// prova final 5
// faltas > 25% reprovado por falta
// informações retiradas do site da UESC

#include <stdio.h>
#include <stdlib.h>

void dadosAluno(int creditos, float notas[], int faltas, float media, float final) {
  printf("Numero de creditos: %i\n", creditos);
  printf("Notas: ");
  for (int i = 0; i < creditos; i++) {
    printf("%.2f ", notas[i]);
  }
  printf("\n");
  printf("Numero de faltas: %i\n", faltas);
  printf("Media: %.2f\n", media);
  if (final != -1)
    printf("Nota da prova final: %.2f\n", final);
}

int reprovadoPorFalta(int faltas, int horasMateria) {
  int faltasToleradas = horasMateria * 0.25;
  if (faltas > faltasToleradas) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  float media, nota, final = -1;
  int faltas, creditos, horasMateria;

  printf("Digite o numero de creditos: \n");
  scanf("%i", &creditos);

  float notas[creditos];
  float notaTotal = 0;
  for (int i = 0; i < creditos; i++) {
    printf("Digite a nota do aluno em cada credito: \n");
    scanf("%f", &nota);
    notas[i] = nota;
    notaTotal += nota;
  }
  media = notaTotal / creditos;

  printf("Digite o numero de faltas: \n");
  scanf("%i", &faltas);

  horasMateria = creditos * 15;
  if (reprovadoPorFalta(faltas, horasMateria)) {
    printf("Reprovado por falta!\n");
    dadosAluno(creditos, notas, faltas, media, final);
    return 0;
  } else {
    if (media >= 7) {
      printf("Aprovado!\n");
      dadosAluno(creditos, notas, faltas, media, final);
      return 0;
    } else {
      printf("Digite a nota da prova final: \n");
      scanf("%f", &final);

      float provaFinal = (media*0.6 - 5)/0.4;
      provaFinal *= -1;

      if (final >= provaFinal) {
        printf("Aprovado por Final!\n");
        dadosAluno(creditos, notas, faltas, media, final);
        return 0;
      } else {
        printf("Reprovado!\n");
        dadosAluno(creditos, notas, faltas, media, final);
        return 0;
      }
    }
  }
}
