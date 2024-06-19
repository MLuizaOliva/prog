/*Possa escolher a figura geométrica plana qual se deseja calcular (segmento de reta, circulo, triangulo, quadrado, retângulo, trapézio, losango, outros;
Possibilite a entrada de valores para a caracterização da figura geométrica escolhida;
Realize os cálculos básicos dessa figura geométrica, como por exemplo área, perímetro, diagonais, centroides, dentre outras;*/

#include <stdio.h>
#include <math.h>

void calcular_retangulo() {
    double comprimento, largura, area, perimetro;
    int vertices = 4;
    printf("Insira o comprimento: ");
    scanf("%lf", &comprimento);
    printf("Insira a largura: ");
    scanf("%lf", &largura);
    area = comprimento * largura;
    perimetro = 2 * (comprimento + largura);
    printf("Area: %.2lf, perimetro %.2lf, vertices: %d\n", area, perimetro, vertices);
}

void calcular_circulo() {
    double raio, area, circunferencia;
    printf("Insira raio: ");
    scanf("%lf", &raio);
    area = M_PI * raio * raio;
    circunferencia = 2 * M_PI * raio;
    printf("Area: %.2lf, circunferencia: %.2lf, Sem vértices.", area, circunferencia, );
}

void calcular_triangulo() {
    double base, altura, lateral, area, perimetro;
    int vertices = 3;
    printf("Insira base: ");
    scanf("%lf", &base);
    printf("Insira altura: ");
    scanf("%lf", &altura);
    printf("Insira a lateral: ");
    scanf("%lf", &lateral);
    area = 0.5 * base * altura;
    perimetro = base + 2 * lateral;
    printf("Area: %.2lf, perimetro %.2lf, vertices: %d\n", area, perimetro, vertices);
}

void calcular_quadrado() {
    double lateral, area, perimetro;
    int vertices = 4;
    printf("Insira a lateral: ");
    scanf("%lf", &lateral);
    area = lateral * lateral;
    perimetro = 4 * lateral;
    printf("Area: %.2lf, perimetro %.2lf, vertices: %d\n", area, perimetro, vertices);
}

int main() {
    int escolha;
    printf("Escolha um formato:\n1. Retangulo\n2. Circulo\n3. Triangulo\n4. Quadrado\n");
    scanf("%d", &escolha);
    switch (escolha) {
        case 1:
            calcular_retangulo();
            break;
        case 2:
            calcular_circulo();
            break;
        case 3:
            calcular_triangulo();
            break;
        case 4:
            calcular_quadrado();
            break;
        default:
            printf("escolha invalida\n");
            break;
    }
    return 0;
}