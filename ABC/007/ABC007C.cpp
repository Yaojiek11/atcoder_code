#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <utility>
using namespace std;
#define INF 100000000
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define rep(i, n) for(int (i)=1; (i)<=(n); (i)++)
typedef pair<int, int> P;
typedef long long ll;
int main(){
    int R, C, m1[4] = {-1, 1, 0, 0}, m2[4] = {0, 0, -1, 1};
    cin >> R >> C;
    bool retu[100][100] = { false }; //最初はすべて壁で初期化
    int sy, sx, gy, gx;
    cin >> sy >> sx;
    cin >> gy >> gx;
    REP(i, R){
        REP(j, C){
            char a;
            cin >> a;
            if(a == '#') retu[i+1][j+1] = false; //壁
            else retu[i+1][j+1] = true;
        }
    }
    int nowy, nowx, kaisuu = 0;
    queue<int> qy, qx;
    qy.push(sy);
    qx.push(sx);
    int num[100][100] = { 0 };
    while(!qy.empty()){
        nowy = qy.front();
        qy.pop();
        nowx = qx.front();
        qx.pop();
        if(nowx == gx && nowy == gy){ //ゴールマスにいるかどうか
            cout << num[nowy][nowx] << endl;
            break;
        }
        for(int i=0; i<4; i++){
            if(retu[nowy + m1[i]][nowx + m2[i]]==true){
                qy.push(nowy + m1[i]);
                qx.push(nowx + m2[i]);
                retu[nowy + m1[i]][nowx + m2[i]] = false; //一度通ったマスは壁に変化させる
                num[nowy + m1[i]][nowx + m2[i]] = num[nowy][nowx] + 1; //歩数を1プラス
            }
        }
        kaisuu++;
    }
    return 0;
}