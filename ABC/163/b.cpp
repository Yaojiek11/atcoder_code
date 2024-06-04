#include <iostream>
#include <limits>
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
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    REP(i, M) cin >> A[i];
    int s = N;
    REP(i, M){
        s -= A[i];
    }

    if(s < 0) cout << -1 << endl;
    else cout << s << endl;
    return 0;
}