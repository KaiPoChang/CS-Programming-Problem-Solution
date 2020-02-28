# include <iostream>
# include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int rounds, a, b;
    int dataArray[] = {0, 1, 2, 3, 4};
    vector<int> data;
    data.assign(dataArray, dataArray + sizeof(dataArray)/sizeof(dataArray[0]));
    cin >> rounds;
    for(int i=0; i<rounds; i++){
        cin >> a >> b;
        swap(data[a], data[b]);
    }

    vector<int>::iterator it;
    for (it = data.begin(); it != data.end(); it++){
        if (it == data.end()-1){
            cout << *it;
        }
        else{
            cout << *it << ' ';
        }
    }

    return 0;
}
