#include <stdio.h>


//soma
float Somar(float Num1, float Num2) {

	float Resultado;

	Resultado = Num1 + Num2;

	return(Resultado);
}


//subtração
float Subtrair(float Num1, float Num2) {

	float Resultado;

	Resultado = Num1 - Num2;

	return(Resultado);
}


//multiplicação
float Multiplicar(float Num1, float Num2) {

	float Resultado;

	Resultado = Num1 * Num2;

	return(Resultado);
}


//divisão
float Dividir(float Num1, float Num2) {

	float Resultado;

	Resultado = Num1 / Num2;

	return(Resultado);
}


//resto
int Resto(int Num1, int Num2) {

	int Resultado;

	Resultado = Num1 % Num2;

	return(Resultado);
}


//potencia
int Potencia(int Base, int Expoente) {

	int Resultado = 1;

	int i;

	for(i = 1; i <= Expoente; i++) {

		Resultado = Resultado * Base;
	}

	return(Resultado);
}


//fatorial
int Fatorial(int Num) {

	int Resultado = 1;

	int i;

	for(i = 1; i <= Num; i++) {

		Resultado = Resultado * i;
	}

	return(Resultado);
}


//potencia recursiva
int PotenciaRecursiva(int Base, int Expoente) {

	if(Expoente == 0) {

		return 1;
	}

	return Base * PotenciaRecursiva(Base, Expoente - 1);
}

int main() {

	//1) Criar um algoritmo que solicite ao usuário dois números reais e apresente: a soma entre eles
	//2) A subtração do primeiro pelo segundo
	//3) A multiplicação entre eles
	//4) A Divisão do primeiro pelo segundo
	//5) O resto da divisão do primeiro pelo segundo
	//6) A exponecial do primeiro valor (base) pelo segundo (expoente) (usar o for) // Fatorial (só do primeiro valor) // Terminal (só do primeiro valor)
	//7) Implementar recursividade no item item 6
	//8) Pesquisa sobre valores default nos paramentros da assinatura

	float vlr1, vlr2;

	//SOMA

	printf("Informe o primeiro valor a ser somado: ");
	scanf("%f", &vlr1);

	printf("Informe o segundo valor a ser somado: ");
	scanf("%f", &vlr2);

	printf("\nA soma de %.1f + %.1f = %.1f",
	       vlr1,
	       vlr2,
	       Somar(vlr1, vlr2));

	//SUBTRAÇÃO

	printf("\n\n");

	printf("Informe o primeiro valor a ser subtraido: ");
	scanf("%f", &vlr1);

	printf("Informe o segundo valor a ser subtraido: ");
	scanf("%f", &vlr2);

	printf("\nA subtracao de %.1f - %.1f = %.1f",
	       vlr1,
	       vlr2,
	       Subtrair(vlr1, vlr2));

	//MULTIPLICAÇÃO

	printf("\n\n");

	printf("Informe o primeiro valor a ser multiplicado: ");
	scanf("%f", &vlr1);

	printf("Informe o segundo valor a ser multiplicado: ");
	scanf("%f", &vlr2);

	printf("\nA multiplicacao de %.1f * %.1f = %.1f",
	       vlr1,
	       vlr2,
	       Multiplicar(vlr1, vlr2));

	//DIVISÃO

	printf("\n\n");

	printf("Informe o primeiro valor a ser dividido: ");
	scanf("%f", &vlr1);

	printf("Informe o segundo valor a ser dividido: ");
	scanf("%f", &vlr2);

	printf("\nA divisao de %.1f / %.1f = %.1f",
	       vlr1,
	       vlr2,
	       Dividir(vlr1, vlr2));

	//RESTO DA DIVISÃO

	printf("\n\n");

	int n1, n2;

	printf("Informe o primeiro valor inteiro: ");
	scanf("%d", &n1);

	printf("Informe o segundo valor inteiro: ");
	scanf("%d", &n2);

	printf("\nO resto da divisao de %d %% %d = %d",
	       n1,
	       n2,
	       Resto(n1, n2));

	//POTÊNCIA COM FOR

	printf("\n\n");

	int base, expoente;

	printf("Informe a base: ");
	scanf("%d", &base);

	printf("Informe o expoente: ");
	scanf("%d", &expoente);

	printf("\nPotencia = %d",
	       Potencia(base, expoente));

	//FATORIAL

	printf("\n\n");

	int numero;

	printf("Informe um numero: ");
	scanf("%d", &numero);

	printf("\nFatorial = %d",
	       Fatorial(numero));

	//POTÊNCIA RECURSIVA

	printf("\n\n");

	printf("Informe a base: ");
	scanf("%d", &base);

	printf("Informe o expoente: ");
	scanf("%d", &expoente);

	printf("\nPotencia Recursiva = %d",
	       PotenciaRecursiva(base, expoente));

	return 0;
}
