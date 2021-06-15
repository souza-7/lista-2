#include <stdio.h>
#include <math.h>
int main(){
double numero, resultado;

    printf("Digite o numero: ");
    	scanf("%lf", &numero); 
    
    resultado = numero* (1);
    
	if(resultado <= 0) 
    	printf("Resposta impossivel");
    else  printf("Resultado: %0.2lf\n ", resultado);
    
	
	
	
	
	return 0;
}
