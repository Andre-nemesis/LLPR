#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float media, soma, N1, N2, N3;
	
	printf("Calculadora de M�dias com 3 notas\n");
	
	printf("Digite aqui sua primeira nota\n");
	scanf("%f",&N1);
	
	printf("Digite aqui sua segunda nota\n");
	scanf("%f",&N2);
	
	printf("Digite aqui sua terceira nota\n");
	scanf("%f",&N3);
	
	soma = N1 + N2 + N3;
	media = soma / 3;
	
	if (media > 5) {
		printf("Voc� foi bem! Essa � sua nota: %f", media);
	} 
		else{
			
			if (media < 5) {
			printf("Que pena voc� n�o foi muito bem ;-;, Essa foi sua nota: %f", media); 
			} 
		
				else{
			
					if (media == 5) {
					printf("Caramba vc foi a media! Essa � sua nota: %f", media); 
					} 
		
				}
	
		}
	
	return 0;
}
