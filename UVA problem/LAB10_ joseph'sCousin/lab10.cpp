# include <iostream>
using namespace std;

int visit[40000] = {0};
int prime[4000]  = {0};

void MakePrime(){
    int PrimeSize = 0;
    for(int i=2; i<40000; i++){
        if (!visit[i]){
            prime[PrimeSize++] = i;
            for(int k = i+i; k<40000; k+=i ){
                visit[k] = 1;
            }
        }
    }
}
int main(){
    MakePrime();
    /*
    for (int i=0; i<4000; i++){
        cout << "i: " << i << endl;
        cout << prime[i] << endl;
    }*/
    int n;
    while ((cin >> n) && (n != 0)){
        int ans=0;
        for (int i=2; i<=n; i++){
            ans = (ans + prime[n-i])%i;
        }
        cout << ans+1 << endl;
    }
    return 0;
}



