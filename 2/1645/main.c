#include<iostream>
#include<memory.h>
using namespace std;

int main(){



    long long matriz[100][101];
    int pri[100];
    int n,k;
    long long qtdsequencia;
        while(1){
            cin>>n>>k;
                if(n==0 && k==0) break;
                    for(int i=0;i<n;i++) cin>>pri[i];
                        memset(matriz,0,sizeof(matriz));
                        for(int i=0;i<n;i++){
                            matriz[i][1]=1;
                                for(int j=0;j<i;j++){
                                    if(pri[j]>=pri[i]) continue;
                                    for(int x=1;x<k;x++){
                                    matriz[i][x+1]+=matriz[j][x];
                }
        }
        }
            qtdsequencia=0;
            for(int i=0;i<n;i++) qtdsequencia+=matriz[i][k];
                cout<<qtdsequencia<<endl;
        }


    return 0;
}
