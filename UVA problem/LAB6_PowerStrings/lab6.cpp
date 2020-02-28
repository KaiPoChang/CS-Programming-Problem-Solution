# include <iostream>
# include <string>
using namespace std;

string input;
bool flag = true;

int main(){
    while (cin >> input && input!="."){
        int N = input.length();

        for (int i=1; i <= N; i++){

            // Only divided completely can be used.
            if ((N%i) == 0){
                for (int k=0; k<N; k++){
                    if (input[k]==input[k%i])
                        {flag = true;}
                    else{
                        flag = false;
                        break;
                    }
                }
            }
            else{
                flag = false;
            }
            if (flag){
                cout << N/i << endl;
                break;
        }
        }
    }
    return 0;
}


