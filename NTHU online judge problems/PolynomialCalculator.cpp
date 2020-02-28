# include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio();
    cin.tie(0);

    int M, N, deg, ans, num, totalAns=0;
    cin >> N >> M;
    deg = N;
    while(deg>=0){
        cin >> num;
        ans = 1;
        for (int i=0; i<deg; i++){
            ans *= M;
        }
        totalAns += num*ans;
        deg -= 1;

    }
    cout << totalAns << endl;
    return 0;
}
