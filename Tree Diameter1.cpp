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
int dest=-1,dnode=-1;
void dfs(int node,int parent,int des){
    if(des>dest){
        dest=des;
        dnode=node;
    }
    for(auto u:adj[node]){
        if(u==parent)continue;
        dfs(u,node,des+1);
    }
}
void solve(){
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,-1,0);
    cout<<dnode<<nl;
    dfs(dnode,-1,0);
    cout<<dest<<' '<<dnode;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}