#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool isPrime(int n)
{
	if(n==2)
		return true;
	if(n%2 == 0)
		return false;

	int limite = (int)sqrt(n);

	for (int i = 3; i <= limite; ++i)
	{
		if(n%i == 0)
			return false;
	}

	return true;
}


int main()
{
	int n, x;

	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &x);
		if( isPrime(x) )
		{
			printf("Prime\n");
		}
		else
		{
			printf("Not Prime\n");
		}
	}


	return 0;
}