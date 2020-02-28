# include <iostream>
# include <string>
# include <algorithm>
using namespace std;

int main(){
    string input;
    while(cin >> input){
        string reversedInput(input);
        reverse(reversedInput.begin(), reversedInput.end());
        if (reversedInput == input){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}
