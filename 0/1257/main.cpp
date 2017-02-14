#include <iostream>
 
using namespace std;
 
int getHashValue(string line, int position)
{
	//Valor = (Posição no alfabeto) + (Elemento de entrada) + (Posição do elemento)
	int velement,vPosition,total = 0;

	string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string word = line.substr(0,50);

	for (int i = 0; i < word.length(); ++i)
	{
		total += alph.find(word[i]) + i + position;
	}

	return total;
}

int main() {
 
    int N, L, parc=0;
    string line;
    cin >> N;
    int total[N];

    for (int i = 0; i < N; ++i)
    {
    	cin >> L;
    	total[i] = 0;
    	if(L >= 1 && L<=100)
    	{    		
    		for (int j = 0; j < L; ++j)
    		{
    			parc = 0;
    			cin >> line;
    			total[i] += getHashValue(line,j);
    		}
    	}
    }

    for (int i = 0; i < N; ++i)
    {
    	cout << total[i] << endl;
    }
 
    return 0;
}