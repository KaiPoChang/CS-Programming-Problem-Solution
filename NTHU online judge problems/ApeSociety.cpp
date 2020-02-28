# include <iostream>
# include <string>
# include <string.h>
using namespace std;

class Ape{
public:
    string name;
    int grade;
    int age;
};

int main(){
    string name;
    int grade, age, N, M;

    cin >> N >> M;
    Ape *List[N];
    for (int i=0; i<N; i++){
        cin >> name >> grade >> age;
        Ape *ape = new Ape();
        ape->name = name;
        ape->grade = grade;
        ape->age = age;
        List[i]=ape;
    }
    // grade
    Ape* temp;
    for (int i=0; i<N-1; i++){
        for (int j=0; j<N-i-1; j++){
            /*cout << "j: " << j << endl;
            cout << "List[j]->name: " << List[j]->name << endl;
            cout << "List[j]->grade: " << List[j]->grade << endl;
            cout << "List[j]->age: " << List[j]->age << endl;
            cout << "List[j+1]->name: " << List[j+1]->name << endl;
            cout << "List[j+1]->grade: " << List[j+1]->grade << endl;
            cout << "List[j+1]->age: " << List[j+1]->age << endl << endl;*/
            if (List[j]->grade<List[j+1]->grade){
                temp = List[j+1];
                List[j+1] = List[j];
                List[j] = temp;
            }

            else if ((List[j]->grade==List[j+1]->grade)&&(List[j]->age>List[j+1]->age)){
                temp = List[j+1];
                List[j+1] = List[j];
                List[j] = temp;
            }
            else if ((List[j]->grade==List[j+1]->grade)&&(List[j]->age==List[j+1]->age)&&(strcmp(&List[j]->name[0], &List[j+1]->name[0])>0)){
                temp = List[j+1];
                List[j+1] = List[j];
                List[j] = temp;
            }

            /*cout << "PRINT List: " << endl;
            for(int w=0; w<N; w++){
                cout << List[w]->name << ' ';
            }
            cout << endl;*/
        }
    }
    for(int j=0; j<M; j++){
        N--;
        cout << List[N]->name << endl;
    }
    return 0;
}
