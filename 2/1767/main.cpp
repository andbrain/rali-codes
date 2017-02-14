#include <iostream>
#include <cstdio>
#include <algorithm>

#define C 50

using namespace std;

void MochilaBin(int n, int qtd[], int peso[])
{
	int tabela[n][C];
	int B;
	//zerando itens com sacola de capacidade 0
	for (int i = 0; i < n; ++i)
	{
		tabela[i][0] = 0;
	}
	//zera cada posicao com nenhum item
	for (int i = 1; i < C; ++i)
	{
		tabela[0][i] = 0;
	}

	//mochila
	int resto1,resto2;
	for (int Y = 0; Y < C; ++Y)
	{
		for (int i = 1; i < n; ++i)
		{
			int A, B;

			A = tabela[i-1][Y];
			resto1 = Y - peso[i];
			if(peso[i] > Y)
			{
				B = 0;
			}
			else
			{
				B = tabela[i-1][Y-peso[i]] + qtd[i];
			}
			tabela[i][Y] = max(A,B);
		}
	}

	
	for (int i = 0; i < C; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << tabela[j][i] << " ";
		}
		cout << endl;
	}
	cout << "Resto: " << resto1 << endl;
	// printf("%d brinquedos\n", brinquedos);
	// printf("Peso: %d kg\n", peso);
	// printf("sobra(m) %d pacote(s)\n", pacotes);
}


int main()
{
	int n, pac_disp;

	//scanf("%d", &n);
	n=1;

	for (int i = 0; i < n; ++i)
	{
		//scanf("%d", &pac_disp);
		pac_disp = 4;

		int qtd[pac_disp];
		int peso[pac_disp];
		
		for (int i = 0; i < pac_disp; ++i)
		{
		//	scanf("%d %d", &qtd[i], &peso[i]);			
		}

		qtd[0] = 6;
		qtd[1] = 21;
		qtd[2] = 72;
		qtd[3] = 143;
		peso[0] = 17;
		peso[1] = 23;
		peso[2] = 24;
		peso[3] = 2;

		MochilaBin(pac_disp, qtd, peso);
		printf("\n");
	}

	return 0;
}