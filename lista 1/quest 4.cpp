#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float N1, N2, N3, N4, produto;
	
	printf("Calculadora que Multiplica 4 números\n");
	printf("Digite aqui o primeiro número\n");
	scanf("%f",&N1);
	printf("Digite aqui o segundo número\n");
	scanf("%f",&N2);
	printf("Digite aqui o terceuro número\n");
	scanf("%f",&N3);
	printf("Digite aqui o quarto número\n");
	scanf("%f",&N4);
	
	produto = N1 * N2 * N3 * N4;
	
	printf("Esse foi o resultado da multiplicação dos números: %f", produto);
	
	return 0;
}
