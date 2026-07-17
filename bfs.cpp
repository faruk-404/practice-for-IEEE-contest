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
    int n,m;cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // cout<< n<<"  "<<m<<nl;

    // for(int i=1;i<=n;i++){
    //     cout<<i<<" --- ";
    //     for(auto x:adj[i])cout<<x<<' ';
    //     nf;
    // }
    
    vector<bool> vis(n+1,false);
    int src;cin>>src;
    queue<int> q;
    q.push(src);
    vis[src]=true;
    while(!q.empty()){
        int node= q.front();
        q.pop();
        cout<<node<<" ";
        for(auto u:adj[node]){
            if(vis[u])continue;
            q.push(u);
            vis[u]=true;
        }
    }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){solve();}
    return 0;
}