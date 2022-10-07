#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int h1,h2,resto;
	float quociente;
	
	printf("Calculadora de Quocientes e Resto entre 2 Números\n");
	printf("Digite aqui o primeiro número\n");
	scanf("%d",&h1);
	printf("Digite aqui o segundo número\n");
	scanf("%d",&h2);
	
	quociente = (float) h1 / h2;
	resto = h1 % h2;
	
	printf("Esse foi o resultado do Quociente:%.2f \nE esse o resultado do Resto: %d", quociente,resto);
	
	return 0;
}
