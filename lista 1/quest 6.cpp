#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float n1,n2,n3,soma,subtracao;
	
	printf("Calculadora de 2 n�meros, onde vai somar os dois primeiros n�meros\ne depois diminuir de outro n�mero\n");
	printf("Digite aqui o primeiro n�mero que ser� somado\n");
	scanf("%f",&n1);
	printf("Digite aqui o segundo n�mero que ser� somado\n");
	scanf("%f",&n2);
	
	soma = n1 + n2;
	
	printf("A soma entre os dois n�meros foi: %.2f\n", soma);
	
	printf("Agora digite outro n�mero para realizar a subtra��o\n");
	scanf("%f",&n3);
	
	subtracao = soma - n3;
	
	printf("Esse foi o resultado da subtra��o da soma j� realizada: %.2f",subtracao);
	
	return 0;
}
