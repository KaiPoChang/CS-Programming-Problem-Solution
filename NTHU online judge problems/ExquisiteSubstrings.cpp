# include <iostream>
# include <string>
using namespace std;

int main(){
    string input;
    while(cin >> input){
        int length = input.size();
        int counter = 0;

        // Odd
        for (int i=1; i<length; i++){
            for (int n=1;i-n>=0 && i+n<=length; n++){
                if (input[i-n] == input[n+i]){
                     counter++;
                }
                else{
                    break;
                }
            }
        }

        // Even
        for (int i=1; i<length; i++){
            for (int n=1; i-n>=0 && i+n-1<=length; n++){
                if (input[i-n] == input[i+n-1]){
                    counter++;
                }
                else{
                    break;
                }
            }
        }
        cout << counter << endl;
    }
    return 0;
}
