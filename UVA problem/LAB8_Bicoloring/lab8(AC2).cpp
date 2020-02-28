# include <iostream>
using namespace std;

int nodes;
int edge;
int edges[205];
int AdjTable[205][205];
int color[205];
bool flag;


void DFS(int lastnode){
    for (int i=0; i<edges[lastnode]; i++){
        int nextnode = AdjTable[lastnode][i];
        int nextnodecolor = color[lastnode]*(-1);

        if (color[nextnode] == 0){
            color[nextnode] = nextnodecolor;
            DFS(nextnode);
        }
        else if (color[nextnode] != nextnodecolor){
            flag = false;
            break;
        }
    }
}

int main(){
    while(cin >> nodes){
        if (nodes == 0){
            break;
        }
        // initialize edges and color
        for (int i=0; i<205; i++){
            color[i] = 0;
            edges[i] = 0;
        }

        // establish AdjTable
        cin >> edge;
        for (int i=0; i<edge; i++){
            int sur, tar;
            cin >> sur >> tar;
            AdjTable[sur][edges[sur]++] = tar;
            AdjTable[tar][edges[tar]++] = sur;
        }

        flag = true;
        color[0]=1;
        DFS(0);

        if (flag){
            cout << "BICOLORABLE." << endl;
        }
        else{
            cout << "NOT BICOLORABLE." << endl;
        }

    }


}
