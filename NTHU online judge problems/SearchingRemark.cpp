# include <iostream>
# include <string>
# include <cstring>
using namespace std;

void ToLower(string &str){
    int add = 'A'-'a';
    for (int i=0; i<str.size(); i++){
        if ('A'<=str[i]&& str[i]<='Z'){
            str[i] = str[i]-add;
        }
    }
    //cout << "TOLOWER: " << str << endl;
    return;
}

int main(){
    string input, s(" \n-/:()[],.");
    char data[10000];
    char *pch;
    int remark = 0;
    cin >> input;
    ToLower(input);
    cin.ignore();
    cin.get(data, 10000, cin.eof());
    pch = strtok(data, &s[0]);
    while(pch != NULL){
        string word(pch, pch+strlen(pch));
        ToLower(word);
        if (word == input){
            remark++;
        }
        pch = strtok(NULL, &s[0]);
    }
    cout << remark << endl;
    return 0;

}
