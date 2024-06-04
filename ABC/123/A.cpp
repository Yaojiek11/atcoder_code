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
    int a, b, c, d, e, k;
    cin >> a >> b >> c >> d >> e >> k;
    int t;
    t = a - e;
    if(abs(t) <= k){
        cout << "Yay!" << endl;
    }else{
        cout << ":(" << endl;
    }
    return 0;
}