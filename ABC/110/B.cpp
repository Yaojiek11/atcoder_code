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
    int N, M, X, Y;
    cin >> N >> M >> X >> Y;
    int mx, my;
    mx = -101;
    my = 101;
    for(int i=0; i<N; i++){
        int x;
        cin >> x;
        if(x >= mx) mx = x;
    }
    for(int i=0; i<M; i++){
        int y;
        cin >> y;
        if(y <= my) my = y;
    }
    if(mx < my){
        for(int Z=mx+1; Z<=my; Z++){
            if(X < Z && Z <= Y){
                cout << "No War" << endl;
                return 0;
            }
        }
    }
    cout << "War" << endl;
    return 0;
}