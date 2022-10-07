#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float media, N1, N2;
	
	printf("Calculadora de Médias com 2 notas\n");
	
	printf("Digite aqui sua primeira nota\n");
	scanf("%f",&N1);
	
	printf("Digite aqui sua segunda nota\n");
	scanf("%f",&N2);
	
	media = (N1 + N2) / 2;
	
	printf("O valor da sua média foi: %f",media);
	
	return 0;
}
