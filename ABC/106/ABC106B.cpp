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
    int N;
    cin >> N;
    int c;
    int ans = 0;
    for(int i = 1; i <= N; i++){
        c = 0;
        if(i % 2 != 0){
            for(int j = 1; j <= i; j++){
                if(i % j == 0){
                    c++;
                }
            }
            if(c==8){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}