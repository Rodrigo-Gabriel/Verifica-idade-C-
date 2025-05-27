#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    int idade;

    printf("Escreva o seu nome: ");
    scanf("%s", nome);

    printf("Bem vindo(a): %s\n", nome);

    printf("Agora digite a sua idade para ver se voce tem mais de 18 anos: ");
    scanf("%d", &idade);

    if(idade >= 18) {
        printf("%s, voce tem %d anos e eh maior de idade!", nome, idade);
    } else {
        printf("%s, voce eh menor de idade", nome);
    }

    return 0;
}
