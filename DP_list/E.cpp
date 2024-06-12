#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#define ll long long
#define INF 1e9+7
const int MAX_N = 110;
const int MAX_V = 100100;
int N;
ll W, w[MAX_N], v[MAX_N];
ll dp[MAX_N][MAX_V] = {0}; // dp[i][j]:=i番目までの品物から、「価値」がjを超えないように選んだときの、重さの総和の最小値
int main(){
    //入力
    cin >> N >> W;
    for(int i=1; i<=N; i++) cin >> w[i] >> v[i];

    //初期化
    for(int i=0; i<MAX_N; i++)
        for(int j=0; j<MAX_V; j++)
            dp[i][j] = INF;
    
    //初期条件
    dp[0][0] = 0;

    //DPループ
    for(int i=1; i<=N; i++){
        for(int j=0; j<MAX_V; j++){
            //i番目の品物を選ぶ
            if(j - v[i] >= 0)
                dp[i][j] = min(dp[i][j], dp[i-1][j-v[i]] + w[i]);

            //選ばない
            dp[i][j] = min(dp[i][j], dp[i-1][j]);
        }
    }

    //求める値は、dp[N][j]の値が、W以下であるような、jの値の最大値
    ll ans = 0;
    for(int j=0; j<MAX_V; j++)
        if(dp[N][j] <= W) ans = j;

    cout << ans << endl;
    return 0;
}