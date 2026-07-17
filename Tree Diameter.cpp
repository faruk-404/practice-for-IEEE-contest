#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define nf cout<<'\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
const int N=1e5;
vector<int> adj[N];

int dist=-1,noode=-1;

void bfs(int node, int parent, int dis){
    if(dis>dist){
        dist=dis;
        noode=node;
    }
    for(auto u:adj[node]){
        if(u==parent)continue;
        bfs(u,node,dis+1);
    }

}

void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bfs(1,-1,0);
    cout<<noode<<' '<<dist<<nl;
    bfs(noode,-1,0);
    cout<<noode<<' '<<dist<<nl;
    
    
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}