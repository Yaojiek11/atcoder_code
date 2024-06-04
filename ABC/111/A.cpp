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
    int num;
    cin >> num;
    int ans100, ans10, ans1;
    ans1 = 10 - num % 10;  //1の位
    num /= 10;
    ans10 = 10 - num % 10;  //10の位
    num /= 10;
    ans100 = 10 - num % 10; //100の位

    cout << ans100 * 100 + ans10 * 10 + ans1 << endl;
    return 0;
}