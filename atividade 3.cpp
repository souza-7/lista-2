#include <stdio.h>
int main(){
int n1, n2, n3, resultado;
     
	printf("Digite o valor: ");
		scanf("%i", &n1);
	printf("Digite o valor: ");
		scanf("%i", &n2);
	printf("Digite o valor: ");
		scanf("%i", &n3);
	
	if (n1 >= n2+n3)
	    printf("Impossivel a construcao de um triangulo\n ");
	else if (n2 >= n1+n3) 
	    printf("Impossivel a construcao de um triangulo\n ");
	else if (n3 >= n1+n2) 
	    printf("Impossivel a construcao de um triangulo\n "); 
	else printf("Possivel a construcao de um triangulo\n ");
	
	return 0;
}
