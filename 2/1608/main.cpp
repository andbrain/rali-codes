#include<iostream>      //cin,cout
#include <cstring>      //memset
#include <algorithm>    //sort

using namespace std;

int main(){

    int T,D,I,B;
    cin >> T;
    for(int i=0;i<T;i++){
        cin >> D >> I >> B;

        int p[I];//vetor de pre?os dos ingredientes
        int custo_do_bolo[B];
        memset(custo_do_bolo,0,sizeof(custo_do_bolo)); //atribuindo zero ao vetor custo_do_bolo

        for(int j=0;j<I;j++){//lendo pre?o da unidade de cada ingrediente
            cin >> p[j];
        }
        for(int j=0;j<B;j++){//lendo a descrição dos bolos
            int Q;
            cin >> Q;
            for(int k=0;k<Q;k++){//lendo os pares (índice do ingrediente, quantidade desse ingrediente)
                int indice,quantidade;
                cin >> indice >> quantidade;
                custo_do_bolo[j] += p[indice]*quantidade;// calculando o custo
            }
        }
        sort(custo_do_bolo,custo_do_bolo+B);//ordenando para pegar o menor custo
        cout << D/custo_do_bolo[0] <<endl;    //imprimindo a quantidade de bolos, D/custo = quantidade
    }
}
