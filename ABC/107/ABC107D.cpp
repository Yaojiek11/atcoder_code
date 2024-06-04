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

const int N = 1e5 + 10;
int n, k, x, F[N], a[N], pre[N];

void upd(int x){
    for(; x<N; x += (x&-x)){
        F[x]++;
    }
}

int que(int x){
    int ans = 0;
    for(; x>0; x-=(x&-x))
        ans += F[x];
    return ans;
}

ll get(int x){
    REP(i, N) pre[i] = 0;
    for(int i=1; i<n+1; i++){
        if(a[i]>x) pre[i] = -1;
        else pre[i] = 1;
        pre[i] += pre[i-1];
    }
    int T = min(*min_element(pre+1, pre+n+1), 0);
    REP(i, n+1) pre[i] -= T-1;
    REP(i, N) F[i] = 0;
    ll cur = 0;
    upd(pre[0]);
    for(int i=1; i<n+1; i++){
        cur += que(pre[i]-1);
        upd(pre[i]);
    }
    return cur;
}

int main(){
    cin >> n;
    for(int i=1; i<n+1; i++) cin >> a[i];

    int bas = 1, son = 1e9;
    ll look = n*(ll)(n+1) / 2 / 2 + 1;
    while(bas < son){
        int mid = (bas+son)/2;
        if(get(mid) >= look) son = mid;
        else bas = mid + 1;
    }
    cout << bas << endl;
    return 0;
}