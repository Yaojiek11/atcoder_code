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
    int A, B, K;
    cin >> A >> B >> K;
    int ans;
    int count = 0;
    for(int i=min(A, B); i>0; i--){
        if(A%i==0 && B%i==0){
            count++;
            //cout << i << endl;
        }
        if(count == K){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}