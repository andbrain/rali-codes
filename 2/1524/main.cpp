#include <iostream>
#include <cstdio>

using namespace std;

int Arry1[1100][1100],Arry2[1100][1100],Arry3[1100][1100];

int main() {
    int pessoas, grupos, cont = 0;

    while(scanf("%d %d", &pessoas, &grupos) != EOF) {

        cont++;

        Arry1[1][1] = 0;
        Arry2[1][1] = 0;
        Arry3[1][1] = cont;

        for(int i=2; i<= pessoas; i++) 
        {
            int temp;
            scanf("%d", &temp);

            for(int j=1; j<=i; j++)
            {
                Arry1[i][j] = 0x3f3f3f3f;

	            if (Arry3[i-1][j])
	            { 
	            	Arry1[i][j] = min(Arry1[i][j], Arry1[i-1][j] + (temp-Arry2[i-1][j]));
	            	Arry3[i][j] = cont;
	            }

	            if(j > 1 && Arry3[i-1][j-1])
	            {
	            	Arry1[i][j] = min(Arry1[i][j], Arry1[i-1][j-1]);
	                Arry3[i][j] = cont;
	            }

	            Arry2[i][j] = temp;

            }//fin for
        }

        cout << Arry1[pessoas][grupos] << endl;
    }//fin while

    return 0;
}