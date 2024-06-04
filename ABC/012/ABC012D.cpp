#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <stack>
#include <queue>
using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
const int INF = 1000000; 
int N, M;
int dp[310][310];

int main(){
    cin >> N >> M;
    //初期化
    for(int i=0; i<310; i++){
        for(int j=0; j<310; j++){
            if(i==j) dp[i][j] = 0;
            else dp[i][j] = INF;
        }
    }
    while(M--){
        int a, b, t;
        cin >> a >> b >> t;
        a--;
        b--;
        dp[a][b] = t;
        dp[b][a] = t;
    }
    //ワーシャルフロイド
    for(int k=0; k<N; k++){
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                dp[i][j] = min(dp[i][j], dp[i][k]+dp[k][j]);
            }
        }
    }
    //バス停ごとの最長距離
    vector<int> dis(N);
    for(int i=0; i<N; i++){
        dis[i] = 0;
        for(int j=0; j<N; j++){
            dis[i] = max(dis[i], dp[i][j]);
        }
    }
    //最小を求める
    int ans = INF;
    for(int i=0; i<N; i++)
        ans = min(ans, dis[i]);
    cout << ans << endl;
    return 0;
}