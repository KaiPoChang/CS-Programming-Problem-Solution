# include <iostream>
using namespace std;


unsigned long long int calculatemod(unsigned long long int B, unsigned long long int P, unsigned long long int M){
    if (P == 0){
        //cout << "A" << endl;
        return 1;
    }
    else if (P%2 == 0){
        //cout << "B" << endl;
        return ((calculatemod(B, P/2, M)%M)*(calculatemod(B, P/2, M)%M))%M;
    }
    else if(P%2 == 1){
        //cout << "C" << endl;
        return ((B%M)*(calculatemod(B, P-1, M)%M))%M;
    }
    //cout << "D" << endl;
}


int main(){
    unsigned long long int B;
    unsigned long long int P;
    unsigned long long int M;
    unsigned long long int R;

    while (cin >> B >> P >> M ){
        R = calculatemod(B, P, M);
        cout << R << endl;
    }
    return 0;
}
/*
int main(){
    int a;
    a=1/2;
    cout<<a<<endl;
    return 0;
}
*/
