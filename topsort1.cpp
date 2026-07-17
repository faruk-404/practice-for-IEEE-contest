#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
const int N=1e6;
vector<int> adj[N];
vector<int> vis(N);
vector<int> topsort;
bool cycle=false;

void dfs(int node){
    if(vis[node]==2)return;
    if(vis[node]==1){
        cycle=true;
        return ;
    }
    vis[node]=1;
    for(auto u:adj[node]){
        dfs(u);
    }
    vis[node]=2;
    topsort.push_back(node);
    

}
void solve(){
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i])dfs(i);
    }
    if(cycle){
        cout<<"Cycle\n";
    }
    reverse(all(topsort));
    for(auto i:topsort)cout<<i<<' ';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}