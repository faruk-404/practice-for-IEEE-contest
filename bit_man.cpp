#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

void solve(){
    int n;cin>>n;
    cout<<(n<<2)<<' ';
    cout<<(n>>2)<<nl;
    for(int i=__lg(n);i>=0;i--){
        cout<<((n>>i)&1);
    }nf;
    n=(n| (1<<4));
    for(int i=__lg(n);i>=0;i--){
        cout<<((n>>i)&1);
    }nf;
    n=n&(~(1<<3));
    for(int i=__lg(n);i>=0;i--){
        cout<<((n>>i)&1);
    }nf;
    n=n^(1<<4);
    for(int i=__lg(n);i>=0;i--){
        cout<<((n>>i)&1);
    }nf;
    cout<<(int)(__builtin_popcount(n))<<nl;
    cout<<__lg(n)<<nl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}