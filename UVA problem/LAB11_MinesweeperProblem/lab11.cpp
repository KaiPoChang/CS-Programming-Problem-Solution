# include <iostream>
# include <string>
using namespace std;

int main(){
    int n, m;

    while(cin >> m >> n){
        char Minesweeper[m][n];
        int MinesweeperNum[500][500];

        if (m==0 && n==0){
            break;
        }
        // initialize Minesweeper
        for (int row=0; row<m; row++){
            string line;
            cin >> line;
            for (int col=0; col<n; col++){
                Minesweeper[row][col] = line[col];
            }
        }

        // initialize Number table
        for (int row=0; row<m; row++){
            for (int col=0; col<n; col++){
                MinesweeperNum[row][col] = 0;
            }
        }

        for (int row=0; row<m; row++){
            for (int col=0; col<n; col++){
                if (Minesweeper[row][col] == '*'){
                    ++MinesweeperNum[row-1][col-1];
                    ++MinesweeperNum[row-1][col];
                    ++MinesweeperNum[row-1][col+1];
                    ++MinesweeperNum[row][col-1];
                    ++MinesweeperNum[row][col+1];
                    ++MinesweeperNum[row+1][col-1];
                    ++MinesweeperNum[row+1][col];
                    ++MinesweeperNum[row+1][col+1];
                }
            }
        }
        for (int row=0; row<m; row++){
            cout << endl;
            for (int col=0; col<n; col++){
                if (Minesweeper[row][col] == '*'){
                    cout << '*';
                }
                else{
                    cout << MinesweeperNum[row][col];
                }
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
