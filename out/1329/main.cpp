#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int N, R;
	int maria,joao;

	scanf("%d", &N);

	while(N != 0)
	{
		maria=joao=0;

		for (int i = 0; i < N; ++i)
		{
			scanf("%d", &R);
			if(R == 0)
				maria++;
			else
				joao++;
		}

		printf("Mary won %d times and John won %d times\n",maria,joao);	

		scanf("%d", &N);		
	}

	return 0;
}