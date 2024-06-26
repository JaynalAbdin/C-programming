#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b, char s)
{
    switch (s)
    {
    case '>':
        return a > b;
    case '<':
        return a < b;
    case '=':
        return a == b;
    default:
        return false;
    }
}

int main()
{

    int a, b;
    char s;
    cin >> a >> s >> b;
    if (cmp(a, b, s))
    {
        cout << "Right" << endl;
    }
    else
    {
        cout << "Wrong" << endl;
    }

    return 0;
}