# include <iostream>
# include <string>
using namespace std;

int main(){
    int times;
    while (cin >> times){
        if (times == 0){
            break;
        }

        int top=1, north=2, west=3, east=4, south=5, down=6;
        for(int i=0; i<times; i++){
            string input;
            cin >> input;

            int tmp_t = top;
            int tmp_n = north;
            int tmp_w = west;
            int tmp_e = east;
            int tmp_s = south;
            int tmp_d = down;

            switch(input[0]){
            case('n'):
                top = tmp_s;
                north = tmp_t;
                down = tmp_n;
                south = tmp_d;
                break;

            case('w'):
                top = tmp_e;
                west = tmp_t;
                down = tmp_w;
                east = tmp_d;
                break;

            case('e'):
                east = tmp_t;
                down = tmp_e;
                west = tmp_d;
                top = tmp_w;
                break;

            case('s'):
                south = tmp_t;
                down = tmp_s;
                north = tmp_d;
                top = tmp_n;
                break;
            }
            //cout << top << endl;
        }
    cout << top << endl;
    }
    return 0;
}
