#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int senha;

	while(true)
	{
		scanf("%d", &senha);
		if(senha == 2002)
		{
			cout << "Acesso Permitido" << endl;			
			break;
		}

		cout << "Senha Invalida" << endl;
	}


	return 0;
}