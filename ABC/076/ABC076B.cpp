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

int N, K;
int ans;

int update(int t, int time){
    if(time==0){
        return t;
    }else{
        time--;
        t = min(update(t * 2, time), update(t + K, time));
        return t;
    }
}

int main(){
    cin >> N >> K;
    ans = update(1, N);
    cout << ans << endl;
    return 0;
}