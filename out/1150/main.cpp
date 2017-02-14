#include <iostream>
#include <cstdio>
#include <vector>
#include <climits>

using namespace std;

int somatorio(vector<int> soma)
{
	int counter = 0;
	for (int i = 0; i < soma.size(); ++i)
	{
		counter += soma.at(i);
	}

	return counter;
}

int main()
{
	vector<int> soma;
	int x,z=INT_MIN;

	scanf("%d",&x);

	while(z <= x)
	{
		scanf("%d",&z);
	}
	
	soma.push_back(x);

	while(somatorio(soma) <= z) {
		x++;
		soma.push_back(x);
	}

	printf("%d\n", (int)soma.size());

	return 0;
}