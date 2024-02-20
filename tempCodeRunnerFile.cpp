#include <iostream>
#include <cmath>

using namespace std;
// unordered map if pii and int
//  A hash function used to hash a pair of any kind
//  struct hash_pair
//  {
//      template <class T1, class T2>
//      size_t operator()(const pair<T1, T2> &p) const
//      {
//          auto hash1 = hash<T1>{}(p.first);
//          auto hash2 = hash<T2>{}(p.second);

//         if (hash1 != hash2)
//         {
//             return hash1 ^ hash2;
//         }

//         // If hash1 == hash2, their XOR is zero.
//         return hash1;
//     }
// };
// unordered_map<pii, int, hash_pair> m;

// Map Comparator function
//  struct cmp {
//      bool operator()(int a, int b) const { return a > b; }
//  };
//  map<int,int> m;

typedef long long ll;
#define MOD 1000000007
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pushb push_back
#define popb pop_back
#define fi(a, b) for (int i = a; i < b; i++)
#define fj(a, b) for (int j = a; j < b; j++)
#define fk(a, b) for (int k = a; k < b; k++)


void solve()
{ int x;
    cin >> x;

    if (x <= 1) {
        cout << 1 << endl;
        return;
    }

    int cnt = 0;
    while (x > 0 && (x & 1) == 0) {
        cnt++;
        x >>= 1; // Right shift to check the next bit
    }

    cout << pow(2, cnt) << endl;
    
    }

int main()
{
    int t;
    cin >> t;

    while (t)
    {
        solve();
        t--;
    }

    return 0;
}
