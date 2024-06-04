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
    string S;
    ll K;
    cin >> S;
    cin >> K;
    for(int i=0; i<K; i++){
        if(S[i] != '1'){
            cout << S[i] << endl;
            return 0;
        }
    }
    cout << 1 << endl;
    return 0;
}