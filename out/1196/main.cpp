#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char getCharacter(char input)
{
	string coluna1 = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	size_t found;

	if(input == ' ')
	{
		return input;
	}

	if (coluna1.find_first_of(input) != string::npos)
	{
		found = coluna1.find_first_of(input);
		return coluna1[found - 1];
	}
}

int main()
{
	string line;
	string phrase;
	size_t tam;

	while(getline(cin,line))
	{
		tam = line.size();

		for (int i = 0; i < tam; ++i)
		{
			line[i] = getCharacter(line[i]);
		}

		cout << line << endl;

		memset(&line[0], 0, sizeof(line));
	}

	return 0;
}