#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n, ano=0, mes=0, dia=0;
	int result, aux;

	cin >> n;

	aux = n / 365;

	if(aux > 0)
	{
		ano = aux;
		n = n - (aux*365);
	}

	aux = n / 30;

	if(aux > 0)
	{
		mes = aux;
		n = n - (aux*30);
	}

	if(n>0)
		dia = n;

	printf("%d ano(s)\n", ano);
	printf("%d mes(es)\n", mes);
	printf("%d dia(s)\n", dia);

	return 0;
}