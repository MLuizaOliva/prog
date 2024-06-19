// Maria Luiza Oliva Santos - 202320113
// calcular imc

#include <stdio.h>
#include <stdlib.h>

float imc(float peso, float altura) {
  float imc;
  imc = peso / (altura * altura);
  return imc;
}

int main(){
  float peso, altura, result;
  
  printf("Digite o peso: ");
  scanf("%f", &peso);
  printf("Digite a altura: ");
  scanf("%f", &altura);
  
  result = imc(peso, altura);

  if(result < 18 ){
    printf("Abaixo do peso");
  }
  else if(result >= 18 && result <= 25){
    printf("Peso normal");
  }
  else if(result > 25 && result <= 30){
    printf("Acima do peso");
  }
  else if(result > 30){
    printf("Sobrepeso");
  }
  else printf("Obeso");

  return 0;
}
