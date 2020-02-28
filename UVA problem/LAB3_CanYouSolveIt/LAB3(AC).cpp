# include <iostream>
using namespace std;

int main(){
    int times;
    cin >> times;
    for (int i=0; i<times; i++){
        int surx, sury, tarx, tary;
        cin >> surx >> sury >> tarx >> tary;

        int dist_sur = (1+surx+sury)*(surx+sury)/2 + (surx+1)-1;
        int dist_tar = (1+tarx+tary)*(tarx+tary)/2 + (tarx+1)-1;
        cout << "Case " << i+1 << ": " << dist_tar-dist_sur << endl;
    }
}
