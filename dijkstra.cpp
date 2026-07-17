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
vector<pair<int,int>> adj[N];
void solve(){
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
    }
    vector<int> dist(n+1);
    for(auto &i:dist)i=LLONG_MAX;
    int src;cin>>src;
    dist[src]=0;
    priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({dist[src],src});
    while(!pq.empty()){
        auto it=pq.top();
        pq.pop();
        int d=it.first;
        int node=it.second;
        if(dist[node]!=d)continue;
        for(auto u:adj[node]){
            int w=u.first;
            int  uu=u.second;
            if(dist[uu]>dist[node]+w){
                dist[uu]=dist[node]+w;
            } 
            pq.push({dist[uu],uu});
        }

    }

}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){solve();}
    return 0;
}