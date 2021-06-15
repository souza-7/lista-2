#include <stdio.h>
int main(){
char placa[8];
int velocidade;
      
      
    printf("Digite a placa do veiculo: ");
    	scanf("%s", &placa[8]);
    printf("Digite a velocidade do veiculo: ");
    	scanf("%i", &velocidade);
    
    if (velocidade > 80)
        printf("Multado: excesso de velocidade\n");
    else printf ("Boa viagem");
	
	
	
	
	
	return 0;
}
