#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int chamadas=0;

int fib_rec( int n)
{
	if ( n==1 ) 
	{
		return 1;
	}
	else if( n==2 )
	{
		chamadas += 2;		
		return 1;
	}
	else
	{
		chamadas += 2;
		return fib_rec(n-1) + fib_rec(n-2);
	}
}

void fibonacci(int x)
{
	int counter = 0, calls = 1;

	int ante, fib=0, prox=1;

	for (int i = 0; i < x; ++i)
	{
		ante = fib;
		fib = prox;
		prox = prox + ante;
	}
	
	printf("fib(%d) = %d calls = %d\n", x, calls, fib);
}


int main() {
 
    int N, X, result;
    scanf("%d",&N);

    for (int i = 0; i < N; ++i)
    {
    	scanf("%d", &X);
    	result = fib_rec(X);
		printf("fib(%d) = %d calls = %d\n", X, chamadas, result);
		chamadas = 0;
    }
 
    return 0;
}