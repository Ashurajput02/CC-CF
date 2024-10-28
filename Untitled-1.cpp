#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007

using namespace std;

// Sieve of Eratosthenes
vector<int> seiveoferatosthenes(int n) {
    vector<int> ans;
    vector<bool> isprime(n, true);
    isprime[0] = false;
    isprime[1] = false;

    for (int i = 2; i < n; i++) {
        if (isprime[i] == true) {
            for (int j = 2 * i; j < n; j += i) {
                isprime[j] = false;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (isprime[i] == true) {
            ans.push_back(i);
        }
    }

    return ans;
}
void solve(){
     int n;
     cin>>n;
     vector<int>ash;
     int sum=0;
     int f=0;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ans.push_back(x);
        sum+=x;
        if(x%3==0)
        f=1;
     }
    if(sum%3==0){
            cout<<"0"<<endl;
        }
        else if(sum%3==2){
            cout<<"1"<<endl;

        }
        else if(f){
            cout<<"1"<<endl;
        }
        else {
            cout<<"2"<<endl;
        }

}
int main() {
    int t;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
