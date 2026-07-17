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


void solve(){
    int n,m;cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> path(n+1,-1);
    vector<bool> vis(n+1,false);
    int src;cin>>src;
    queue<int> q;
    q.push(src);
    vis[src]=true;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto u:adj[node]){
            if(vis[u])continue;
            path[u]=node;
            vis[u]=true;
            q.push(u);
        }
    }
    int en;cin>>en;
    vector<int> pt;
    pt.push_back(en);
    while(path[en]!=-1){
        en=path[en];
        pt.push_back(en);
    }
    reverse(all(pt));
    for(auto i:pt)cout<<i<<' ';
    nf;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}