#include <stdio.h>
int main(){
double peso, peso1, altura;
char sexo[9];

    printf("Digite aqui sua altura: ");
    	scanf("%lf", &altura);
    
    printf("Digite aqui seu sexo: ");
    	scanf("%s", &sexo[9]);
    
    peso = (72.5 * altura) - 58;
    peso1 = (62.1 * altura) - 44.7;
    
    if (sexo[9])
        printf("Seu peso ideal e: %0.2lf\n ", peso);
    else printf("Seu peso ideal e: %0.2lf\n ", peso1);
	
	
	
	return 0; 
}
