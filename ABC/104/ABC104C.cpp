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
#define INF 1000000000
#define ll long long
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define rep(i, n) for(int (i)=1; (i)<=(n); (i)++)
int main(){
    int D, G;
    cin >> D >> G;
    vector<int> p(D);
    vector<int> c(D);
    REP(i, D){
        cin >> p[i] >> c[i];
    }

    int ans = INF;
    for(int mask=0; mask < (1<<D); mask++){
        int s = 0, num = 0, rest_max = -1;
        for(int i=0; i<D; i++){
            if(mask >> i & 1){
                s += 100 * (i+1) * p[i] + c[i];
                num += p[i];
            }else{
                rest_max = i;
            }
        }
        if(s < G){
            int s1 =100 * (rest_max+1);
            int need = (G-s+s1-1) / s1;
            if(need >= p[rest_max]){
                continue;
            }
            num += need;
        }
        ans = min(ans, num);
    }
    cout << ans << endl;
    return 0;
}