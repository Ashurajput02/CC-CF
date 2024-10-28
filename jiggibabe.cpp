#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
typedef long long ll;
using namespace std;
const int MAX_VAL = 1e6;
vector<bool> is_prime(MAX_VAL + 1, true);
void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAX_VAL; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX_VAL; j += i) {
                is_prime[j] = false;
            }
        }
    }
}
void solve() {
    sieve();
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<int> temp(n);
        for (int i = 0; i < n; ++i) {
            if (a[i] % 2 == 1 && !is_prime[a[i]]) {
                temp[i] = 1;
            } else if (a[i]==2) {
                temp[i] = -1;
            } else {
                temp[i] =0 ;
            }
        }
        int ans = 0;
        int sm = 0;

        for (int i = 0; i < n; ++i) {
            sm += temp[i];          
            ans = max(ans, sm);
            if (sm < 0) {
                sm = 0;
            }
        }
        cout << ans << "\n";   
    }
}
int main() {
    solve();
    return 0;
}