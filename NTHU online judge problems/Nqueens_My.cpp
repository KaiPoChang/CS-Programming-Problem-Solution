# include <iostream>
# define MAX 100
using namespace std;

//global variable
int tot = 0, num;
int arr[MAX]={0}; // Queen is at the (num, arr[num])

// Check whether this will conflict with previous position of queen
int valid(int row, int col){
    for (int i=0; i<row; i++){
        if (arr[i]==col || (col-arr[i]==i-row) ||(col-arr[i]==-i+row)){
            return 0;
        }
    }
    return 1;
}


void SearchQueen(int row){
    if (row == num){
        cout << tot << endl;
        tot++;
    }
    else{
        for (int i=0; i<num; i++){
            int flag = 0;
            arr[row] = i;
            if (valid(row, arr[row])){
                SearchQueen(row+1);
            }
        }
    }
}


int main(){
    cin >> num;
    SearchQueen(0);
    cout << tot << endl;
    return 0;
}
