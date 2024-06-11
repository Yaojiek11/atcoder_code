#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#define ll long long
#define INF 1e9+7
int N; 
ll dp[100010][3];   // dp[i][a:0 b:1 c:2] i日目に第2indexに該当する行動をした際の満足度
ll active[100010][3]; // i日目にaした:active[i][0] i日目にbした:active[i][1] i日目にcした:active[i][2]
int main(){
    //入力
    cin >> N;
    for(int i=0; i<N; i++)
        for(int j=0; j<3; j++)
            cin >> active[i][j];

    //初期化(最大化問題なので初期値は0)
    for(int i=0; i<=N; i++)
        for(int j=0; j<3; j++)
            dp[i][j] = 0;

    //DP
    for(int i=0; i<N; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                if(j != k){
                    dp[i+1][k] = max(dp[i+1][k], dp[i][j]+active[i][k]);
                }
            }
        }
    }

    ll ans = 0;
    for(int j=0; j<3; j++) ans = max(ans, dp[N][j]);
    cout << ans << endl;
    return 0;
}