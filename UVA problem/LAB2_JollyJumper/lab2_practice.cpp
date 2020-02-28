#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
    int totalnum;
    while(cin >> totalnum){
        int counter = 0;
        int recorder[3005] = {0};
        int diff[3005] = {0};
        bool flag;

        if (totalnum <= 0){
            cout << "Not jolly" << endl;
            continue;
        }
        // initialize recorder
        for (int i=0; i<totalnum; i++){
            cin >> recorder[i];
        }


        for (int i=0; i<totalnum-1; i++){
            diff[i] = abs(recorder[i] - recorder[i+1]);
        }

        for (int i=1; i<totalnum; i++){
            for (int j=0; j<totalnum-1; j++){
                if (i==diff[j]){
                    counter++;
                    break;
                }
            }
        }
        if (counter == totalnum-1){
            cout << "Jolly" << endl;
        }
        else{
            cout << "Not jolly" << endl;
        }
    }
    return 0;
}

