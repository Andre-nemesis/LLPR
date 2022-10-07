#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float media, soma, N1, N2, N3;
	
	printf("Calculadora de Médias com 3 notas\n");
	
	printf("Digite aqui sua primeira nota\n");
	scanf("%f",&N1);
	
	printf("Digite aqui sua segunda nota\n");
	scanf("%f",&N2);
	
	printf("Digite aqui sua terceira nota\n");
	scanf("%f",&N3);
	
	soma = N1 + N2 + N3;
	media = soma / 3;
	
	printf("O valor calculado da media entre os números %f, %f, %f foi: %f", N1,N2,N3,media);
	
	return 0;
}
