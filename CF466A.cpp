#include <iostream>
using namespace std;
int main()
{
    int n;
    int m;
    int a;
    int b;
    int answer = 0;
    cin >> n >> m >> a >> b;
    if (m * a <= b)
    {
        answer = n * a;
    }
    else
    {
        answer = (n / m) * b + min((n % m) * a, b);
    }
    cout<<answer;
}