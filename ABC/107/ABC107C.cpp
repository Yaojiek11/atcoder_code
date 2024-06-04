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
#define INF 1000000000
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define rep(i, n) for(int (i)=1; (i)<=(n); (i)++)
typedef pair<int, int> P;
typedef long long ll;
int main(){
    int N, K;
    cin >> N >> K;
    vector<ll> x(N);
    REP(i, N) cin >> x[i];

    ll min_cost = INF;
    ll cost1, cost2;
    for(int i=0; i<N-K+1; i++){
        cost1 = abs(x[i] - x[i+K-1]) + abs(x[i]);
        cost2 = abs(x[i] - x[i+K-1]) + abs(x[i+K-1]);
        
        min_cost = min(min_cost, min(cost1, cost2));
    }
    cout << min_cost << endl;
    return 0;
}