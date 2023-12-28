#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;
void solve();
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

const static int SIZE = 2;
const static int MSB = 30;

class Trie
{
private:
    struct TrieNode
    {
        TrieNode *children[SIZE];
        TrieNode()
        {
            for (int i = 0; i < SIZE; ++i)
            {
                children[i] = nullptr;
            }
        }
        ~TrieNode()
        {
            for (int i = 0; i < SIZE; ++i)
            {
                delete children[i];
                children[i] = nullptr;
            }
        }
    };
    TrieNode *root;

public:
    Trie() : root(new TrieNode()) {}

    ~Trie()
    {
        delete root;
        root = nullptr;
    }

    void insert(int key)
    {
        TrieNode *curr = root;

        for (int i = MSB; i >= 0; --i)
        {
            bool bit = (bool)(key & (1 << i));
            if (!curr->children[bit])
            {
                curr->children[bit] = new TrieNode();
            }
            curr = curr->children[bit];
        }
    }

    int query(int key, int &otherKey)
    {

        int XOR = 0;
        TrieNode *curr = root;
        for (int i = MSB; i >= 0; --i)
        {
            bool bit = (bool)(key & (1 << i));
            if (curr->children[!bit])
            {
                curr = curr->children[!bit];
                XOR |= (1 << i);
                if (!bit)
                {
                    otherKey |= (1 << i);
                }
                else
                {
                    otherKey &= ~(1 << i);
                }
            }
            else
            {
                if (bit)
                {
                    otherKey |= (1 << i);
                }
                else
                {
                    otherKey &= ~(1 << i);
                }
                curr = curr->children[bit];
            }
        }
        return XOR;
    }
};

pair<int, int> findMaxXor(vector<int> &A)
{
    int n = A.size();
    int maximumXOR = 0;
    pair<int, int> result;
    if (n < 2)
        return result;

    Trie trie;
    trie.insert(0);
    for (int i = 0; i < n; ++i)
    {
        int elem = 0;
        int curr = trie.query(A[i], elem);

        if (curr > maximumXOR)
        {
            maximumXOR = curr;
            result = make_pair(A[i], elem);
        }
        trie.insert(A[i]);
    }

    return result;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n - 1);
    for (auto &i : a)
        cin >> i;
    Trie t;
    a.insert(a.begin(), 0);
    t.insert(0);
    for (int i = 1; i < n; i++)
        a[i] ^= a[i - 1], t.insert(a[i]);

    for (int i = 0; i < n; i++)
        if (a[i] < n && t.findMaxXor(a[i]) == n - 1)
        {
            vector<int> b;
            for (int j = 0; j < n; j++)
                b.push_back(a[j] ^ a[i]);

            if (is_ok(b))
            {
                for (auto &i : b)
                    cout << i << " ";
                cout << endl;
                return;
            }
        }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}