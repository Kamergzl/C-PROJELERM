#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

string ReverseText(string S)
{

    string P = S;

    reverse(P.begin(), P.end());
    cout << "\n"
         << P;
    cout << "\n";
    return 0;
}
int main()
{
    string S = "Merhaba Dunya!";

    cout << ReverseText(S);

    return 0;
}