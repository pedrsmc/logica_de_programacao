#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Elabore um algoritmo para receber o login e a senha de um usuário. 
// Caso o usuário e a senha estejam corretos, mostre a mensagem "Bem-vindo!", caso contrário, mostre a mensagem "Login ou senha inválidos." 

int main(void) {
    char login[10] = "pedro123", pass[7] = "12345";
    char typedlog[100], typedpass[100];

    printf("Login: ");
    gets(typedlog);
    printf("Senha: ");
    gets(typedpass);

    // strcmp() método para comparar strings

    if(strcmp(login, typedlog) == 0 && strcmp(pass, typedpass) == 0) {
        system("cls");
        printf("Entrada permitida...");
    } else {
        printf("\nLogin ou senha invalidos!\n");
    }
}