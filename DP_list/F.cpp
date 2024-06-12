#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#define ll long long
#define INF 1e9+7

const int MAX_S = 3100;
const int MAX_T = 3100;
string s, t;

/* dp[i+1][j+1]:=sのi文字目までとtのj文字目まででのLCS(共通部分文字列)の長さ */
int dp[MAX_S][MAX_T] = {0}; //初期条件、初期値ともに0

int main(){
    cin >> s >> t;

    /* 考え方 */
    /* dp[i][j],dp[i][j+1],dp[i+1][j]を使ってdp[i+1][j+1]を表すことを考える */

    /* s[i]==t[j]ならばdp[i][j]に対してsのi文字目とtのj文字目を付け加えれば1文字伸びるので */
    /* dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j]+1) */

    /* dp[i+1][j]に対して、tのj文字目を追加しても特にLCSの長さは変わらず */
    /* dp[i+1][j+1] = max(dp[i+1][j+1], dp[i+1][j]) */

    /* dp[i][j+1]に対して、sのi文字目を追加しても特にLCSのn長さは変わらず */
    /* dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j+1]) */

    //DPループ
    for(int i=0; i<s.size(); i++){
        for(int j=0; j<t.size(); j++){
            if(s[i]==t[j]) dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j]+1);
            dp[i+1][j+1] = max(dp[i+1][j+1], dp[i+1][j]);
            dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j+1]);
        }
    }

    /* 解はdp[n:=|s|][m:=|t|] */

    /* 解(文字列)を復元する方法 */
    /* 基本的にはdp[n][m]から出発して「どのノードから更新されてきたのか」を順に辿っていく */
    /* 今回はDPテーブルの値を見ながら、今いるノードがどのノードから更新されて来たのかを特定していく(素朴でオーソドックスな方法) */

    string res = "";
    int i=(int)s.size(), j=(int)t.size();
    //DPの遷移を遡る
    while(i > 0 && j > 0){
        // (i-1, j) -> (i, j)と更新されていた場合
        if(dp[i][j] == dp[i-1][j]) i--;

        // (i, j-1) -> (i, j)と更新されていた場合
        else if(dp[i][j] == dp[i][j-1]) j--;

        // (i-1, j-1) -> (i, j)と更新されていた場合
        else{
            res = s[i-1] + res; // このとき s[i-1] == t[j-1] なので、t[j-1] + res でも OK
            i--;
            j--;
        }
    }
    cout << res << endl;
    return 0;
}