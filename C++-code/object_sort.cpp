#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
};
bool cmp(Student a, Student b)
{
    if (a.age < b.age)
        return true;
    else
        return false;
}
int main()
{
    Student s[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, s[i].name);
        cin >> s[i].age;
        cin.ignore();
    }
    sort(s, s + 3, cmp);

    for (int i = 0; i < 3; i++)
    {
        cout << s[i].name << " " << s[i].age << endl;
    }
    return 0;
}