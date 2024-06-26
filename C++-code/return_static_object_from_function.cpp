#include <bits/stdc++.h>
using namespace std;

class Jaynal
{
public:
    Jaynal(int age) : age(age)
    {
        cout << "Constructor called with age " << age << endl;
    }
    int get_age()
    {
        return age;
    }
    void set_age(int new_age)
    {
        age = new_age;
    }

    int age;
};
Jaynal &get_static_age()
{
    static Jaynal instance(25);
    return instance;
}
int main()
{
    Jaynal &res1 = get_static_age();
    cout << "Age from res1 = " << res1.get_age() << endl;

    res1.set_age(30);

    Jaynal &res2 = get_static_age();
    cout << "Age from res2 = " << res2.get_age() << endl;

    return 0;
}