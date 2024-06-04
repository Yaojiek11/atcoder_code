#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <utility>
using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
typedef pair<int, int> P;   //P(最短時間、頂点)
typedef long long ll;
const int INF = 100000000;
const int MAX_N = 300;
struct edge{int to, time;};

vector<edge> EDGES[MAX_N];
ll d[MAX_N];
bool used[MAX_N];

void dijkstra(int s){
    priority_queue<P, vector<P>, greater<P> > que;
    REP(t, MAX_N) d[t] = INF; 
    REP(t, MAX_N) used[t] = false;
    d[s]=0;
    que.push(P(0,s));
    while(!que.empty()){
        P p = que.top();
        que.pop();
        int v = p.second; //頂点
        //cout << "v=" << v << endl;
        //cout << "size=" << EDGES[v].size() << endl;
        //cout << EDGES[v][1].to << endl;
        //cout << EDGES[v][1].time << endl;
            
        if(used[v]) continue; //既に探索済みかどうか
        used[v] = true;
        for(int i=0; i<EDGES[v].size(); i++){
            edge e = EDGES[v][i];
            //cout << e.to << endl;
            //cout << e.time << endl;
            if(d[e.to] > d[v] + e.time){
                d[e.to] = d[v] + e.time;
                que.push(P(d[e.to], e.to));
            }       
        }
    }
}

int main(){
    int N, M;
    cin >> N >> M;
    int a, b, t;
    while(M--){
        cin >> a >> b >> t;
        a--;
        b--; //頂点番号がが0からの場合はこれはいらない
        edge e1 = {b ,t};
        edge e2 = {a, t};
        EDGES[a].push_back(e1);
        EDGES[b].push_back(e2);
    }

    ll ans = INF;
    REP(i, N){
        dijkstra(i);
        ll res = 0;
        REP(j, N){
            res = max(res, d[j]);
        }
        ans = min(ans, res);
    }
    cout << ans << endl;
    return 0;
}