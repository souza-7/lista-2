#include <stdio.h>
#include <math.h>
int main(){
int n1, resultado;

    printf("Digite aqui um numero: ");
    	scanf("%i", &n1);
    
    resultado = n1/2;
    
    
    if (resultado%2 == 0 )
        printf("Este numero e par");
    else printf("Este numero e impar");
	
	return 0;
}
