#include <iostream>
using namespace std;

int main()
{
    unsigned long long n;
    cin >> n;

    unsigned long long Sn = (n * (n + 1)) / 2;
    unsigned long long Sum = 0;

    for (unsigned long long i = 0; i < n - 1; i++)
    {
        unsigned long long x;
        cin >> x;
        Sum += x;
    }

    unsigned long long tn = Sn - Sum;
    cout << tn << endl;
}
