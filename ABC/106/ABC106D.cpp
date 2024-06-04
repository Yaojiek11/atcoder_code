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

int main(){
    int N, M, Q;
    cin >> N >> M >> Q;
    vector<vector<int> > ruiseki(N+1, vector<int>(N+1, 0));
    REP(i, M){
        int L, R;
        cin >> L >> R;
        ruiseki[L][R]++;
    }
    //二次元累積和table作成
    REP(i, N) {
        REP(j, N) {
            ruiseki[i][j + 1] += ruiseki[i][j];
        }
    }
    REP(i, N) {
        REP(j, N + 1) {
            ruiseki[i + 1][j] += ruiseki[i][j];
        }
    }

    REP(i, Q){
        int p, q;
        cin >> p >> q;
        cout << ruiseki[q][q] - ruiseki[q][p-1] - ruiseki[p-1][q] + ruiseki[p-1][p-1] << endl;
    }
    return 0;
}