#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1 = {10, 20, 30, 40};
    // vector<int> v2 = {1,2, 3};
    // v2 = v1;
    v1.pop_back();
    v1.push_back(50);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    return 0;
}