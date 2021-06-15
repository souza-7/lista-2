#include <stdio.h>
int main(){
double horas, valor;
    
    printf("Digite quantas horas voce ultilizou de internet: ");
    	scanf("%lf", &horas);
    
    valor = horas*0.1;
    
    if (horas <= 20)
    	printf("O valor a ser pago e de 30 reais ");
    else if (horas > 20)
    	printf("O valor a ser pago e: ", valor);
    else printf ("Nao deve nada");
	
	
	return 0;
}
