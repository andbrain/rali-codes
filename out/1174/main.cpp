#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int tam = 100;
	double r[tam];
	for (int i = 0; i < tam; ++i)
	{
		scanf("%lf", &r[i]);
	}	

	for (int i = 0; i < tam; ++i)
	{
		if(r[i] <= 10)
			printf("A[%d] = %.1f\n", i,r[i]);		
	}

	return 0;
}