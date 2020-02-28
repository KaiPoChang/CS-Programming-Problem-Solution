# include <iostream>
using namespace std;

int JudgeMuti(int xarray[], int x, int n){
    int muti=0;
    for (int i=0; i<n; i++){
        if (!(xarray[i]%x)){
            muti++;
        }
    }
    return muti;
}

int JudgeDiv(int xarray[], int x, int n){
    int div=0;
    for (int i=0; i<n; i++){
        if (!(x%xarray[i])){
            div++;
        }
    }
    return div;
}

int main(){
    int num, n, minium, inputMin;
    cin >> n;
    int input[n]={0}, mutiNum[n]={0}, divNum[n]={0}, total[n]={0};

    //initialize input
    for (int i=0; i<n; i++){
        cin >> num;
        input[i] = num;
    }
    //calculate
    for (int i=0; i<n; i++){
        mutiNum[i] = JudgeMuti(input, input[i], n);
        divNum[i] = JudgeDiv(input, input[i], n);
        total[i] = mutiNum[i]-divNum[i];
    }
    // get minium total
    minium = total[0];
    inputMin = input[0];
    for (int i=1; i<n; i++){
        if (minium==total[i] && inputMin>input[i]){
            inputMin = input[i];
        }
        if (minium>total[i]){
            minium = total[i];
            inputMin = input[i];
        }
    }
    cout << inputMin << endl;
    return 0;
}
