// CPH JUDGE by ctrl+C+P
#include <bits/stdc++.h>
using namespace std;

// bool comparator(pii p1, pii p2)
// {
//     if (p1.first != p2.first)
//     {
//         return p1.first < p2.first;
//     }
//     return p1.second > p2.second;
// }

// bool comparator(pii p1, pii p2)
// {
//     if (p1.second != p2.second)
//     {
//         return p1.second < p2.second;
//     }
//     return p1.first < p2.first;
// }

// for set
// struct comp
// {
//     bool operator()(const pll &p1, const pll &p2) const
//     {
//         if (p1.second != p2.second)
//         {
//             return p1.second < p2.second;
//         }
//         return p1.first < p2.first;
//     }
// };

// static bool comparator(pll p1, pll p2)
// {
//     if (p1.second != p2.second)
//     {
//         return p1.second < p2.second;
//     }
//     return p1.first < p2.first;
// }

// struct ListNode
// {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

// ListNode *reverse(ListNode *head)
// {
//     ListNode *prev = NULL;
//     ListNode *curr = head;
//     ListNode *forward = head->next;
//     while (forward != NULL)
//     {
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//         forward = forward->next;
//     }
//     curr->next = prev;
//     return curr;
// }

// void printList(ListNode *head)
// {
//     while (head != NULL)
//     {
//         cout << head->val << endl;
//         head = head->next;
//     }
// }

// Code to find all prime numbers till n
//  void SieveOfEratosthenes(int n, set<int> &v)
//  {
//      bool prime[n + 1];
//      memset(prime, true, sizeof(prime));

//     for (int p = 2; p * p <= n; p++)
//     {
//         if (prime[p] == true)
//         {
//             for (int i = p * 2; i <= n; i += p)
//                 prime[i] = false;
//         }
//     }

//     // v contains all prime numbers
//     for (int p = 2; p <= n; p++)
//         if (prime[p])
//             v.insert(p);
// }

// bool isValid(string s)
// {
//     // if(s[0] == '0')return false;
//     int i = stoi(s, nullptr, 2);
//     if (i % 5 == 0 or i == 1)
//         return true;
//     return false;
// }

// Convert binary string to decimal
//  int isValid(string &s)
//  {
//      int res=0,val=1;
//      for(int i=s.size();i>=0;i--)
//      {
//          if(s[i]=='1')
//          {
//              res+=val;
//          }
//          val=val*2;
//      }
//      return val;
//  }

// Comparator function for 2d vector
//  vector<vector<int>> v;
//  sort(v.begin(), v.end(), [](const vector<int> &a, const vector<int> &b)
//          { return a[0] < b[0]; });

// Shift all elements of vector to right by k indices
// reverse(nums.begin(), nums.begin() + n-k);
// reverse(nums.begin() + n-k, nums.end());
// reverse(nums.begin(), nums.end());

// Shift all elements of vector to left by k indices
// reverse(temp.begin(), temp.end());
// reverse(temp.begin(), temp.begin() + k);
// reverse(temp.begin() + k, temp.end());

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
{
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    int jig = abs(b - a);
    int ash = 0;
    int sim = -1;
    int anv = jig * 2;
    anv = sqrt(anv);
    for (int i = anv; i <= anv + 5; i++)
    {
        int ash = i * (i + 1);
        ash = ash / 2;
        int jyada = ash - jig;
        if (jyada < 0)
        {
            continue;
        }
        if (jyada % 2 != 0)
        {
            continue;
        }
        else
        {
            sim = i;
            break;
        }
    }
    cout << sim << endl;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}