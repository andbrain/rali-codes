#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;

void Sort(vector<int> *h)
{
	sort(h->begin(), h->end());
}

void Print(vector<int> *h, int key)
{	
	if (binary_search(h->begin(), h->end(), key))
	{
		vector<int>::iterator it;
		it = lower_bound(h->begin(), h->end(), key);
		int pos = (it - h->begin()) + 1;
		printf("%d found at %d\n", key,pos);
	}
	else
		printf("%d not found\n", key);	
}
 
int main() {

    int test=0, N, Q, aux;
    vector<int> n;

    scanf("%d %d", &N, &Q);

    while(N!=0 && Q!=0 && test < 65)
    {
    	if(aux > 0 && aux <= 10000)
    	{
	    	test++;
			printf("CASE# %d:\n", test);

	    	for (int i = 0; i < N; ++i)
	    	{
	    		scanf("%d", &aux);
	    		if(aux > 0 && aux <= 10000)
	    			n.push_back(aux);
	    	}
	    	
			Sort(&n);

	    	for (int i = 0; i < Q; ++i)
	    	{
	    		scanf("%d", &aux);
	    		
	    		if(aux > 0 && aux <= 10000)
	    			Print(&n, aux);
	    	}

	    	n.clear();   		
    	}

    	scanf("%d %d", &N, &Q);
    }
 
    return 0;
}