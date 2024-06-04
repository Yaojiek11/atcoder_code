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
    int a, b ,c;
    cin >> a >> b >> c;
    int m = max({a, b, c});
    int ans;
    if(m == a){
        ans = m*10 + b + c;
    }else if(m == b){
        ans = m*10 + a + c;
    }else if(m == c){
        ans = m*10 + a + b;
    }
    cout << ans << endl;
    return 0;
}