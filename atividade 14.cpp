#include <stdio.h>
int main(){
int a, b, c;

    printf("Digite um valor: ");
    	scanf("%i", &a);
    printf("Digite um valor: ");
    	scanf("%i", &b);
    printf("Digite um valor: ");
    	scanf("%i", &c);
    
    if (a>b && a>c)
    	printf("O maior valor e: %i ", a);
    else if (b>a && b>c)
    	printf("O maior valor e: %i ", b);
    else printf ("O maior valor e: %i ", c);
    


    return 0;
}
