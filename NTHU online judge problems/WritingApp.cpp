# include <iostream>
using namespace std;

int CheckPalin(string &str, int &l, int &r){
    if(l>=r){
        return 0;
    }
    else if (str[l] == str[r]){
        return
    }
    else if (str[l] != str[r]){
        int delright = CheckPalin()
        int delleft =
        return
    }
}




int main(){
    int len, lim, x;
    while (cin >> len >> lim){
        int l = 0, r = len-1;
        string str;
        cin >> str;
        x = CheckPalin(str, l, r);
        if (x<=lim){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}
