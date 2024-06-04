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
const int MAX_N = 200;
const long long MAX_W = 1000000000;
int main(){
    int N;
    long long W;
    cin >> N >> W;
    int w[MAX_N];
    long long v[MAX_N];
    long long dp[MAX_N+10][MAX_W+10];
    REP(i, N) cin >> v[i] >> w[i];

    for(int j=0; j<=W; j++){
        dp[0][j] = 0;
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<=W; j++){
            if(j >= w[i]){
                dp[i+1][j] = max((long long)dp[i][j], dp[i][j-w[i]]+v[i]);
            }else{
                dp[i+1][j] = dp[i][j];
            }
        }
    }
    cout << dp[N][W] << endl;
    return 0;
}