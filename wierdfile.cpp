// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// void algo(long n);
// int main()
// {
//     //    cout << "enter a number" << endl;
//     long n;
//     cin >> n;
//     cout << n << " ";
//     algo(n);
//     return 0;
// }
// // void algo(int n)
// // {
// //     if (n == 1)
// //     {

// //         return;
// //     }

// //     else if (n % 2 == 0)
// //     {
// //         n = n / 2;
// //     }
// //     else
// //     {
// //         n = n * 3 + 1;
// //     }
// //     cout << n << " ";
// //     algo(n);
// // }

// void algo(long n)
// {
//     while (n != 1)
//     {
//         if (n % 2 == 0)
//         {
//             n = n / 2;
//             cout << n << " ";
//         }
//         else
//         {
//             n = n * 3 + 1;
//             cout << n << " ";
//         }
//     }
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void algo(unsigned long long n);

int main()
{
    unsigned long long n;
    cin >> n;
    algo(n);
    return 0;
}

void algo(unsigned long long n)
{
    cout << n << " ";
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            cout << n << " ";
        }
        else
        {
            n = n * 3 + 1;
            cout << n << " ";
        }
    }
}
