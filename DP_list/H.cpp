#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#define ll long long
#define INF 1e9+7
const int MOD = 1e9+7;
int H,W;
vector<string> a;

//dp[i][j]:=(0,0)から(i,j)までの経路の本数(1e9+7で割った余り)
int dp[1100][1100] = {0}; //初期化

//add
void add(int &a, int b){
    a += b;
    if(a >= MOD) a-=MOD;
}

int main(){
    //入力
    cin >> H >> W;
    a.resize(H);
    for(int i=0; i<H; i++) cin >> a[i];

    //初期条件
    dp[0][0]=1;

    //DPループ
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            /*(i+1,j)が空きマスならばdp[i+1][j]+=dp[i][j]*/
            if(i+1 < H && a[i+1][j] == '.') add(dp[i+1][j], dp[i][j]);
            /*(i,j+1)が空きマスならばdp[i][j+1]+=dp[i][j]*/
            if(j+1 < W && a[i][j+1] == '.') add(dp[i][j+1], dp[i][j]);
        }
    }
    cout << dp[H-1][W-1] << endl;
    return 0;
}