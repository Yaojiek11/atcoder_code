#include <iostream>
#include <iomanip>
using namespace std;
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#define ll long long
#define INF 1e9+7

int N;
vector<double> p;

//dp[i][j]:=最初i枚のコインを投げたときに表がj枚となる確率
double dp[3100][3100];

int main(){
    cin >> N;
    p.resize(N);
    for(int i=0; i<N; i++) cin >> p[i];

    //初期条件
    dp[0][0] = 1.0;

    //dpループ
    for(int i=0; i<N; i++){
        for(int j=0; j<=i; j++){
            /*次のコインが表 : dp[i+1][j+1] += dp[i][j]*p*/
            dp[i+1][j+1] += dp[i][j]*p[i];
            /*次のコインが裏 : dp[i+1][j] = dp[i][j]*(1-p)*/
            dp[i+1][j] += dp[i][j]*(1.0-p[i]);
        }
    }

    double res = 0.0;
    //表の個数が裏の個数を上回る確率
    for(int j=N/2+1; j<=N; j++) res += dp[N][j];
    cout << fixed << setprecision(10) << res << endl;
    return 0;
}