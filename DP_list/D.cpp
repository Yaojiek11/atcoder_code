#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#define ll long long
#define INF 1e9+7
int N, W;
ll w[110], v[110];
ll dp[110][100010] = {0}; // dp[i][j]:=i-1番目までの品物から、重さがjを超えないように選んだときの、価値の総和の最大値
int main(){
    cin >> N >> W;
    for(int i=0; i<N; i++) cin >> w[i] >> v[i];

    for(int i=0; i<N; i++){
        for(int j=0; j<=W; j++){
            //i番目の品物を選ぶ
            if(j - w[i] >= 0)
                dp[i+1][j] = max(dp[i+1][j], dp[i][j-w[i]] + v[i]);

            //選ばない
            dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
        }
    }

    cout << dp[N][W] << endl;
    return 0;
}