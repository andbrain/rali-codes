#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <sstream>

using namespace std;

int diffString(const char *first, const char *second, int tam)
{
    int counter=0;

	for (int i = 0; i < tam; ++i)
    {
        if(first[i] == second[i])
            counter++;
        else
            break;
    }

	return counter;
}

void ordena1(vector<string> *vec)
{
    sort(vec->begin(), vec->end());
}

string charToString(char *c)
{
    stringstream ss;
    string s;

    ss << c;
    ss >> s;

    return s;
}
 
int main() {
 
    int N;
    long int total, tam, count;
    string first, tel;
    char ns[200];
    vector<string> telefones;
    
    while(scanf("%d", &N) != EOF)
    {
		for (int i = 0; i < N; ++i)
		{
			scanf("%s", ns);
            tel = charToString(ns);
			telefones.push_back(tel);
		}

        ordena1(&telefones);

		total = 0;
        count = 0;
        first = *(telefones.begin());
        tam = first.length();

		for(vector<string>::iterator it = telefones.begin()+1; it != telefones.end(); ++it)
	    {
	    	count = diffString(&(*(it-1)->c_str()),&(*(it)->c_str()), tam);
	    	total += count;
	    }
	
		printf("%li\n", total); 
		telefones.erase(telefones.begin(), telefones.end());
    }

    return 0;
}