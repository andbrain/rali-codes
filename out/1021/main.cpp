#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

float calcValor(float valor, int divisao, int *inc)
{
	int aux = valor / divisao;

	if(aux > 0)
	{
		*inc = aux;
		valor -= (aux*divisao);
	}

	return valor;
}

float calcMoeda(float valor, float divisao, int *inc)
{
	int aux = valor / divisao;
	
	if(aux > 0)
	{
		*inc = aux;
		valor -= (aux*divisao);
	}

	return valor;
}

int main()
{
	float valor;
	int n100=0, n50=0, n20=0, n10=0, n5=0, n2=0;
	int m1=0, m_5=0, m_25=0, m_10=0, m_05=0, m_01=0;

	cin >> valor;

	valor = calcValor(valor, 100, &n100);
	valor = calcValor(valor, 50, &n50);
	valor = calcValor(valor, 20, &n20);
	valor = calcValor(valor, 10, &n10);
	valor = calcValor(valor, 5, &n5);
	valor = calcValor(valor, 2, &n2);

	m1 = (int)valor;
	valor = valor - m1;

	valor = calcMoeda(valor, 0.5, &m_5);
	valor = calcMoeda(valor, 0.25, &m_25);
	valor = calcMoeda(valor, 0.10, &m_10);
	valor = calcMoeda(valor, 0.05, &m_05);

	m_01 = roundf(valor * 100);

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ %.2f\n", n100, 100.0);
	printf("%d nota(s) de R$ %.2f\n", n50, 50.0);
	printf("%d nota(s) de R$ %.2f\n", n20, 20.0);
	printf("%d nota(s) de R$ %.2f\n", n10, 10.0);
	printf("%d nota(s) de R$ %.2f\n", n5, 5.0);
	printf("%d nota(s) de R$ %.2f\n", n2, 2.0);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ %.2f\n", m1, 1.0);
	printf("%d moeda(s) de R$ %.2f\n", m_5, 0.5);
	printf("%d moeda(s) de R$ %.2f\n", m_25, 0.25);
	printf("%d moeda(s) de R$ %.2f\n", m_10, 0.10);
	printf("%d moeda(s) de R$ %.2f\n", m_05, 0.05);
	printf("%d moeda(s) de R$ %.2f\n", m_01, 0.01);

	return 0;
}