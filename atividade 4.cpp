#include <stdio.h>
int main(){
char nome[30];
char sexo[9]; 
char masculino[10], feminino[10];

    printf("Digite o nome: ");
    	scanf("%s", &nome[30]);
    printf("Digite o sexo: ");
    	scanf("%s", &sexo[9]);
    
    if (sexo == masculino) 
        printf("Ilmo. Sr. %s\n", nome[30]);
    else printf("Ilma. Sra. %s", nome[30]);
    

	
	
	return 0;
}
