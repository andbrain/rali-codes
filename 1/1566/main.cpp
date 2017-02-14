#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

void Sort(vector<int> *h)
{
	sort(h->begin(), h->end());
}

void Print(vector<int> *h)
{
	printf("%d", *(h->begin()));
	
	for (vector<int>::iterator it = h->begin()+1; it != h->end(); ++it)
		printf(" %d", *it);

    cout << endl;
}

int main()
{
	int NC, N, aux;
	vector<int> *h;

	scanf("%d", &NC);

	for (int i = 0; i < NC; ++i)
	{
		scanf("%d", &N);

		h = new vector<int>();

		for (int j = 0; j < N; ++j)
		{
			scanf("%d", &aux);
			h->push_back(aux);
		}

		Sort(h);
		Print(h);
	}

	delete(h);

	return 0;
}