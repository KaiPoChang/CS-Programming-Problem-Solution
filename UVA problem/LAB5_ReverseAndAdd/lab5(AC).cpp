# include <iostream>
using namespace std;

long long int Reversedigits(long long int input){
    long long int reversednumber = 0;
    while (input!=0){

        reversednumber = reversednumber*10 + input%10;
        input = input/10;
    }
    return reversednumber;
}

bool JudgePalindrome(long long int input){
    long long int reversednumber = Reversedigits(input);
    if (reversednumber == input){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int round;
    long long int input;
    cin >> round;

    for (int i=0; i<round; i++){
        bool flag = false;
        int counter = 0;
        cin >> input;

        while (!flag){

            long long int reversedinput;
            reversedinput = Reversedigits(input);
            flag = JudgePalindrome(reversedinput+input);
            //cout << "input: " << input << endl;
            //cout << "reversedinput: " << reversedinput << endl;
            input = reversedinput+input;
            counter += 1;

            if (flag){
                cout << counter << ' ' << input << endl;
            }
        }
    }



    return 0;
}
