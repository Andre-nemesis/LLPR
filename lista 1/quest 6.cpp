#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float n1,n2,n3,soma,subtracao;
	
	printf("Calculadora de 2 números, onde vai somar os dois primeiros números\ne depois diminuir de outro número\n");
	printf("Digite aqui o primeiro número que será somado\n");
	scanf("%f",&n1);
	printf("Digite aqui o segundo número que será somado\n");
	scanf("%f",&n2);
	
	soma = n1 + n2;
	
	printf("A soma entre os dois números foi: %.2f\n", soma);
	
	printf("Agora digite outro número para realizar a subtração\n");
	scanf("%f",&n3);
	
	subtracao = soma - n3;
	
	printf("Esse foi o resultado da subtração da soma já realizada: %.2f",subtracao);
	
	return 0;
}
