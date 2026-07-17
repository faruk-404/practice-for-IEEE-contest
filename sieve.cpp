#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
const int N=1e3;
vector<bool> isprime(N,false);
vector<int> prime;

void sieve(){
    for(int i=2;i*i<N;i++){
        if(isprime[i])continue;
        for(int j=(i*i);j<N;j+=i){
            isprime[j]=true;
        }
    }
    for(int i=2;i<N;i++){
        if(!isprime[i])prime.push_back(i);
    }
}

void solve(){

    for(auto i:prime)cout<<i<<' ';

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}