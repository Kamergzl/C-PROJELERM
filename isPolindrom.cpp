
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string IsPolindrom(string S)
{

    string P = S;

    reverse(P.begin(), P.end());

    if (S == P)
    {

        return "Yes";
    }

    else
    {

        return "No";
    }
}

int main()
{
    string S = "kayak";
    cout << IsPolindrom(S);

    return 0;
}
