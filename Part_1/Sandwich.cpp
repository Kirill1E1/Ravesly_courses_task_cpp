#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
string sandwich;

    cout << "Vvedite stroku: ";
    cin >> sandwich;
    cout << endl;

    int i=0,S=0;

    bool answer;

    if (sandwich[i] == sandwich[sandwich.size()-1-i])
    {
        answer = true;
        i++;
    }
        else answer = false;

    for (int j=0; j < sandwich.size()/2;j++) if (sandwich[j]!=sandwich[j+1]) S++;


if(S == 1 && answer == true)  cout <<"true";
else cout <<"false";

    return 0;
}
