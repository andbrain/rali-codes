#include <iostream>

using namespace std;

int main()
{
	int x;
	int N[10];
	cin >> x;

	if(x <= 50)
	{
		N[0] = x;
		cout << "N[" << 0 << "] = " << N[0] << endl;

		for(int i=1; i<10; ++i)
		{
			N[i] = N[i-1]*2;
			cout << "N[" << i << "] = " << N[i] << endl;

		}
	}

	return 0;
}