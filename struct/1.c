// struct 

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    struct pessoa{
        char nome[50];
        char snome[50];
        int idade;
    };

    struct pessoa mypessoa;
    printf("\n--------Cadastro---------\n");
    printf("Digite o nome: ");
    fflush(stdin);
    fgets(mypessoa.nome, 50, stdin);
    printf("Digite o sobrenome: ");
    fflush(stdin);
    fgets(mypessoa.snome, 50, stdin);
    printf("Digite a idade: ");
    fflush(stdin);
    scanf("%d", &mypessoa.idade);
    printf("\n--------Show cadastro---------\n");
    printf("Nome: %s %s", mypessoa.nome, mypessoa.snome); 
    printf("Sobrenome: %s", mypessoa.idade);

    return 0;

}