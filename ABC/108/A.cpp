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
    int K;
    cin >> K;
    int exist[110][110];
    for(int i=1; i<=K; i++){
        for(int j=1; j<=K; j++){
            exist[i][j] = 0;
        }
    }
    for(int i=1; i<=K; i++){
        for(int j=1; j<=K; j++){
            if(i == j) exist[i][j] = 0;
            else if(i != j){
                if((i%2 == 0 && j%2 != 0) || (i%2 != 0 && j%2 == 0))
                    exist[i][j]++;
            }
        }
    }
    int ans = 0;
    for(int i=1; i<=K; i++){
        for(int j=1; j<=K; j++){
            ans++;
        }
    }
    cout << ans/4 << endl;
    return 0;
}