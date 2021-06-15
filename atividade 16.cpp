#include <stdio.h>
int main(){
char nome1[20], nome2[20], nome3[20];
double altura1, altura2, altura3;  
    
    printf("Digite aqui o nome: ");
    	scanf("%s", &nome1[20]);
    printf("Digite aqui a altura: ");
    	scanf("%lf", &altura1);
    printf("Digite aqui o nome: ");
    	scanf("%s", &nome2[20]);
    printf("Digite aqui a altura: ");
    	scanf("%lf", &altura2);
    printf("Digite aqui o nome: ");
    	scanf("%s", &nome3[20]);
    printf("Digite aqui a altura: ");
    	scanf("%lf", &altura3); 
    
    if (altura1 < altura2 && altura1 < altura3)
    	printf("A menor pessoa e:  %s ", nome1);
    else if (altura2 < altura1 && altura2 < altura3)
    	printf("A menor pessoa e:  %s ", nome2);
    else if (altura3 < altura2 && altura3 < altura1)
    	printf("A menor pessoa e:  %s ", nome3);
    else("Algo deu errado!!!");
    
    return 0;
}
