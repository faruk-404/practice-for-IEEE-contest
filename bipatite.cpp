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
    vector<int> color(n+1,-1);
    int src;cin>>src;
    queue<int> q;
    q.push(src);
    color[src]=0;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto u:adj[node]){
            if(color[u]==-1){
                color[u]=color[node]^1;
                q.push(u);
            }
            else if(color[u]==color[node]){
                cout<<"IMPOSSIBLE\n";
                return;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<i<<' '<<color[i]<<nl;
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