#include <bits/stdc++.h>
using namespace std;
int main()
{
    // replace
    // vector<int> v = {1,2,2,3,4,5,2,5,6};
    // replace(v.begin()+2,v.end(), 2,100);
    // for(int x:v){
    //     cout<<x<< " ";
    // }
    vector<int> v = {10, 20, 20, 30, 40, 50, 60};
    auto it = find(v.begin(), v.end(), 200);
    if (it == v.end())
        cout << " Not found" << endl;
    else
        cout << "found";

    return 0;
}