#include <iostream>
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
#define INF 10000000000
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define rep(i, n) for(int (i)=1; (i)<=(n); (i)++)
typedef pair<int, int> P;
typedef long long ll;
int N, X;
int point[101000];
int diff[101000];
int ans = 0;

int gcd(int a, int b){
    if(a%b == 0) return b;
    else return gcd(b, a%b);
}

int main(){
    cin >> N >> X;
    REP(i, N){
        cin >> point[i];
        diff[i] = abs(point[i] - X);
    }

    if(N == 1){
        ans = diff[0];
    }else{
        int tmp = diff[0];
        if(tmp == 0) tmp = diff[1];
        REP(i, N){
            if(diff[i] == 0) continue;
            tmp = gcd(tmp, diff[i]);
        }
        ans = tmp;
    }
    cout << ans << endl;
    return 0;
}