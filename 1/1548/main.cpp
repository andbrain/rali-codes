#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

void Sort(vector<int> *h)
{
	sort(h->begin(), h->end());
}
 
int main() {
 
    int N, M;
    vector<int> P, sorted;    
    int counter;

    scanf("%d", &N);

    for (int i = 0; i < N; ++i)
    {
    	scanf("%d", &M);
    	int array[M];
    	counter = 0;

    	for (int j = 0; j < M; j++)
		{
		  scanf("%d", &array[j]);
		  P.push_back(array[j]);
		  sorted.push_back(array[j]);		  
		}

		Sort(&sorted);

		for (int k = 0; k < M; ++k)
		{
			if(P[k] == sorted[M-k-1])
				counter++;
		}
		
		printf("%d\n", counter);

    	P.clear();
    	sorted.clear();
    }
 
    return 0;
}