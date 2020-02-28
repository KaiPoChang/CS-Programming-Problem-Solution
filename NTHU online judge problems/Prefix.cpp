# include <iostream>
# include <string>
using namespace std;

string input;
double ans=0;
double Calculate(int &pos){
    double v1, v2;
    //cout << "pos: " << pos << endl;
    //cout << "input[pos]: " << input[pos] << endl;
    if (input[pos] == ' '){
        pos++;
        Calculate(pos);
    }
    else if (input[pos] == '/'){
        pos++;
        cout << "( ";
        v1 = Calculate(pos);
        cout << "/ ";
        v2 = Calculate(pos);
        cout << ") ";
        ans = v1/v2;
    }
    else if (input[pos] == '*'){
        pos++;
        cout << "( ";
        v1 = Calculate(pos);
        cout << "* ";
        v2 = Calculate(pos);
        cout << ") ";
        ans = v1*v2;
    }
    else if (input[pos] == '+'){
        pos++;
        cout << "( ";
        v1 = Calculate(pos);
        cout << "+ ";
        v2 = Calculate(pos);
        cout << ") ";
        ans = v1+v2;
    }
    else if (input[pos] == '-'){
        pos++;
        cout << "( ";
        v1 = Calculate(pos);
        cout << "- ";
        v2 = Calculate(pos);
        cout << ") ";
        ans = v1-v2;
    }
    else if ('0'<=input[pos] && input[pos]<='9'){
        cout << input[pos] << ' ';
        ans = input[pos]-'0';
        pos++;
    }
    //cout << "ans: " << ans << endl;
    return ans;
}

int main(){
    int num;
    cin >> num;
    cin.get();
    while(num--){
        int pos = 0;
        ans = 0;
        input.clear();
        getline(cin, input);
        Calculate(pos);
        cout << "= " << ans << endl;
    }
}
