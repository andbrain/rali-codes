#include <iostream>
#include <queue>

using namespace std;
 
int main() {
 
    int n, counter=0, aux;

    cin >> n;

    while(n != 0)
    {
        if(n<=50)
        {
            int v[n-1];
            queue<int> fila;
            queue<int> descartados;

            for (int i = 1; i <= n; ++i)
            {
                fila.push(i);
            }

            while(fila.size() > 1) {
                descartados.push(fila.front());
                fila.pop();
                aux = fila.front();
                fila.pop();
                fila.push(aux);
                counter++;
            }

            cout << "Discarded cards: " << descartados.front();
            descartados.pop();

            while(!descartados.empty())
            {
                cout << ", " << descartados.front();
                descartados.pop();
            }

            cout << endl;
            cout << "Remaining card: " << fila.back() << endl;
            fila.pop();
        }

        cin >> n;
    }
    
    return 0;
}