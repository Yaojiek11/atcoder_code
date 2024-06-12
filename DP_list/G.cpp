#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#define ll long long
#define INF 1e9+7

int N, M;
vector<vector<int>> G; //グラフ
/* dp[v]:=ノードvを始点としたときの、Gの有向きパスの長さの最大値 */
int dp[100100];

/* メモ化再帰 */
int rec(int v){
    if(dp[v] != -1)
        return dp[v]; //更新済み

    int res = 0;
    for(auto nv : G[v])
        res = max(res, rec(nv)+1);
    return dp[v] = res; // メモ(dp[v]に格納)しながらリターン
}

int main(){
    cin >> N >> M;
    G.assign(N, vector<int>());
    for(int i=0; i<M; i++){
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        G[x].push_back(y);
    }

    //初期化
    for(int v=0; v<N; v++) dp[v] = -1;

    //全ノードを1通り更新しながら解を求める
    int res = 0;
    for(int v=0; v<N; v++)
        res = max(res, rec(v));
    
    cout << res << endl;
    return 0;
}