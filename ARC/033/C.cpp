#include <iostream>
#include <numeric>
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
const int MOD = 1000000007;
struct SumSegTree {
    int n, height;
    vector<int> dat;
 
    // 初期化（_nは最大要素数）
    SumSegTree(int _n) {
        n = 1;
        height = 1;
        while (n < _n) {
            n *= 2;
            height++;
        }
        dat = vector<int>(2 * n - 1);
    }
 
    // 場所i(0-indexed)にxを足す
    void add(int i, int x) {
        i += n - 1; // i番目の葉ノードへ
        dat[i] += x;
        while (i > 0) { // 下から上がっていく
            i = (i - 1) / 2;
            dat[i] += x; //更新
        }
    }
 
    // 区間[a,b)の総和。ノードk=[l,r)に着目している。
    int _sum(int a, int b, int k, int l, int r) {
        if (r <= a || b <= l)return 0;    // 交差しない
        if (a <= l && r <= b)return dat[k];   // a,l,r,bの順で完全に含まれる
        else { 
            int s1 = _sum(a, b, 2 * k + 1, l, (l + r) / 2); // 左の子
            int s2 = _sum(a, b, 2 * k + 2, (l + r) / 2, r); // 右の子
            return s1 + s2;
        }
    }
 
    // 内部クエリ_sum()を呼び出す
    int sum(int a, int b) {
        return _sum(a, b, 0, 0, n);
    }
};
int Q, N = 200001;
int main(){
    cin >> Q;
    SumSegTree segt(N);
    REP(i, Q){
        int T, X;
        cin >> T >> X;
        if(T == 1){
            segt.add(X, 1);
        }else{
            int ans = 0, r = N;
            //二分探索
            while(r - ans > 1){
                int mid = (ans + r) / 2;
                if(segt.sum(1, mid) < X){
                    ans = mid;
                }
                else{
                    r = mid;
                }
            }
            cout << ans << endl;
            segt.add(ans, -1);
        }
    }
    return 0;
}