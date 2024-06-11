#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#define ll long long
#define INF 1e9+7
int N, dp[100010];
int main(){
    //入力
    cin >> N;
    vector<int> h(N+1);
    for(int i=0; i<N; i++) cin >> h[i];

    //初期化(最小化問題なので初期値はINF)
    for(int i=0; i<N; i++) dp[i] = INF;

    dp[0] = 0;
    for(int i=1; i<N; i++){
        //足場i+1に飛ぶ
        dp[i] = min(dp[i], dp[i-1]+abs(h[i]-h[i-1]));

        //足場i+2に飛ぶ
        if(i > 1) dp[i] = min(dp[i], dp[i-2]+abs(h[i]-h[i-2]));
    }

    cout << dp[N-1] << endl;
    return 0;
}