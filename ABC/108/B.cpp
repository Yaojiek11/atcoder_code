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
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int dx, dy;
    dx = x2-x1;
    dy = y2-y1;
    int x3, y3, x4, y4;
    x3 = x2 - dy;
    y3 = y2 + dx;
    x4 = x1 - dy;
    y4 = y1 + dx;
    cout << x3 <<" "<< y3 <<" "<< x4 <<" "<< y4 << endl;
    return 0;
}