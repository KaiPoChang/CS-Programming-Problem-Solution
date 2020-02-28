# include <iostream>
# include <iterator>
# include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int peopleNum;
    while(cin >> peopleNum){
        int money[peopleNum]={0}, order[peopleNum]={0};
        int moneyNum, *minElement, position=0, ranking=0, prev_minElement=0, sameElementAppearTimes=0;
        // Initialize money
        for (int i=0; i<peopleNum; i++){
            cin >> moneyNum;
            money[i] = moneyNum;
        }

        //find max element and let it to be 1000000001
        for (int i=0; i<peopleNum; i++){
            minElement = min_element(money, money+peopleNum);
            position = distance(money, minElement);
            /*cout << "prev_minElement: " << prev_minElement << endl;
            cout << "minElement: " << *minElement << endl;*/
            if (prev_minElement != *minElement){
                ranking += (sameElementAppearTimes + 1);
                sameElementAppearTimes = 0;
            }
            else{
                ++sameElementAppearTimes;
            }
            prev_minElement = *minElement;
            money[position] = 1000000001;
            order[position] = ranking;
        }

        for (int i=0; i<peopleNum; i++){
            if (i==(peopleNum-1)){
                cout << order[i];
            }
            else{
                cout << order[i] << ' ';
            }

        }
        cout << endl;
    }
    return 0;
}

