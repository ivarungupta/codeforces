#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long v;
    long long e;
    for (int i = 0; i < t; i++)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        v = a * d;
        e = b * c;
        if (v == e)
        {
            cout << "0\n";
        }
        else if (e != 0 && v % e == 0 || v != 0 && e % v == 0)
        {
            cout << "1\n";
        }
        else
        {
            cout << "2\n";
        }
    }
}