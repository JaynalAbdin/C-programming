#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50, 60};
    vector<int> v2 = {1, 2, 3, 4, 5};

    v.insert(v.begin() + 2, v2.begin(), v2.end());
    v.insert(v.begin() + 3, 333);
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}