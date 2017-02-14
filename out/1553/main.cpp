#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main()
{
	int n, k;
	int aux;
	map<int,int> mapa;

	scanf("%d %d",&n,&k);

	while(n!=0 && k!=0)
	{
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &aux);
			mapa[aux]++;
		}

		int counter = 0;
		int maior = mapa.begin()->second;

		for (map<int,int>::iterator it=mapa.begin(); it!=mapa.end(); ++it)
	    {
	    	if(it->second >= k)
	    		counter++;	    	
	    }

	    if(counter)
	    	cout << counter << endl;
	    else
	    	cout << "0" << endl;
		
		mapa.clear();
		scanf("%d %d",&n,&k);
	}

	return 0;
}