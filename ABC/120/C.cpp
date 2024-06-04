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
    string S;
    cin >> S;
    int c1=0;
    int c2=0;
    for(int i=0; i<S.length(); i++){
        if(S[i] == '0')
            c1++;
        else
            c2++;
    }
    cout << 2 * min(c1, c2) << endl;
    return 0;
}