#include <stdio.h>
int main(){
int idade, dias;
char nome[30];

    printf("Digite aqui seu nome: ");
    	scanf("%s", &nome[30]);
    
    printf("Digite aqui sua idade: ");
    	scanf("%i", &idade); 
    
    dias = idade*365; 
    
    printf("Voce viveu: %i dias de vida", dias);
    
    
	return 0;
}
