#include <stdio.h>
int main(){
int valor1, valor2, valor3;

    printf("Digite aqui o valor: ");
    	scanf("%i", &valor1);
    printf("Digite aqui o valor: ");
    	scanf("%i", &valor2);
    printf("Digite aqui o valor: ");
    	scanf("%i", &valor3);
    
    if (valor1 < valor2)
        printf("O menor valor e: %i\n", valor1);          //valor1 < valor2 --- valor1 < valor3 --- valor2 < valor1 --- valor2 < valor3 --- valor3 < valor 1 --- valor3 < valor 2
    else if (valor1 < valor3)
        printf("O menor valor e: %i\n", valor1);
    else if (valor2 < valor1)
        printf("O menor valor e: %i\n", valor2);
    else if (valor2 < valor3)
        printf("O menor valor e: %i\n", valor2);
    else if (valor3 < valor1)
        printf("O menor valor e: %i\n", valor3);
    else if (valor3 < valor2)
        printf("O menor valor e: %i\n", valor3); 
    else printf("Impossivel calcular!");
        
        
                      
	
	
	return 0;
}
