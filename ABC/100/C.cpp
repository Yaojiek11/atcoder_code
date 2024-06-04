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

int temp;

int func(int a){
    if(a%2 == 0){
        temp++;
        func(a/2);
    }
    return temp;
}

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    REP(i, N) cin >> a[i];
    int ans = 0;
    REP(i, N){
        temp = 0;
        ans += func(a[i]);
    }
    cout << ans << endl;
    return 0;
}