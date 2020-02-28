# include <iostream>
using namespace std;

void PrintWave(int n, int m, int t){

    for (int standno1=1; standno1<=t-m && standno1<=n; standno1++){
        cout << "-";
    }
    for (int sitno=1; sitno<=t && sitno<=m && sitno<= m+n-t; sitno++){
        cout << "^";
    }
    for (int standno2=1; standno2<=n-t; standno2++){
        cout << "-";
    }
    cout << endl;
}

int main(){
    int T, n, m, t;
    cin >> T;
    for (int i=0; i<T; i++){
        cin >> n >> m >> t;
        PrintWave(n, m, t);
    }
    return 0;
}

