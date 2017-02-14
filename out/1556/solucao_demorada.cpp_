#include <iostream>
#include <map>
#include <stack>

using namespace std;

void copia(stack<int>s, stack<int> *d)
{
	while(!s.empty()) 
	{
		d->push(s.top());
		s.pop();
	}
}

string stackSub(stack<int> pilha, string word)
{
	string sub = "";
	stack<int> p;
	copia(pilha,&p);

	while(!p.empty()) {
		sub += word[p.top()];
		p.pop();
	}

	return sub;
}

void subLexStack(string word)
{
	stack<int> pilha;
	map<string,string> sub;
	int n = (word.length()-1);
	int init = 0;
	string temp;
	//primeiro elemento
	pilha.push(init);
	temp = stackSub(pilha,word);
	sub[temp] = temp;

	while(!pilha.empty() || init < n-1)
	{
		if(init < n)
		{
			pilha.push(++init);
			temp = stackSub(pilha,word);
			sub[temp] = temp;
		}
		else
		{
			pilha.pop();
			init = pilha.top();
			pilha.pop();
		}
	}

	//ultimo elemento
	pilha.push(n);
	temp = stackSub(pilha,word);
	sub[temp] = temp;

	for (map<string,string>::iterator it=sub.begin(); it!=sub.end(); ++it)
    	cout << it->first << endl;
}


int main()
{

	string n;

	cin >> n;
	subLexStack(n);

	return 0;
}