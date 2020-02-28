#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    while (getline(cin, input))
    {
        char sent[1000];
        char temp[1000];

        for (int i=0; i<input.size(); i++)
            {
                sent[i] = input[i];
            }

        int start = 0;
        int wid = input.size();
        for (int i=0; i<=input.size(); i++)
            {
                if (sent[i] == ' ' || i==wid)
                {
                    int ending = i-1;
                        for (int i=ending; i>=start; i--)
                        {
                            cout << sent[i];
                        }
                    cout << ' ';
                    start = ending+2;
                }
            }
        cout << endl << endl;
        }
    return 0;
}
