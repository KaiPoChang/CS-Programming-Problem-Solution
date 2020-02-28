# include <iostream>
using namespace std;


int PowOfEight(int n){
    if (n==0){
        return 1;
    }
    else{
        if (n%2 == 0){
            return PowOfEight(n/2)*PowOfEight(n/2);
        }
        else{
            return 8*PowOfEight((n-1)/2)*PowOfEight((n-1)/2);
        }
    }
}
int Calculate(int num){
    if (num==0){
        return 1;
    }
    else{
        return PowOfEight(num) + Calculate(--num);
    }
}

int main(){
    int num;
    cin >> num;
    cout << Calculate(num) << endl;
}
