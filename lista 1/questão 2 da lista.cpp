#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float media, N1, N2, N3;
	
	printf("Calculadora de Médias com 3 notas\n");
	
	printf("Digite aqui sua primeira nota\n");
	scanf("%f",&N1);
	
	printf("Digite aqui sua segunda nota\n");
	scanf("%f",&N2);
	
	printf("Digite aqui sua terceira nota\n");
	scanf("%f",&N3);
	
	media = N1 + N2 + N3 / 3;
	
	printf("O valor calculado da média entre os números %.2f, %.2f, %.2f foi: %.2f", N1,N2,N3,media);
	
	//não fuincionou por que, a falta do parêntese faz com que apenas a variável N3 fosse dividida
	
	return 0;
}
