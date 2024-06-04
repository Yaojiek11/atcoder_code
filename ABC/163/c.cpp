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
    int N;
    cin >> N;

    vector<int> JOSHIs(N);
    JOSHIs[0] = 0;
    for(int i=1; i<N; i++){
        cin >> JOSHIs[i];
    }

    vector<int> BUKAs(N);

    //initialization
    REP(i, N) BUKAs[i] = 0;

    for(int i=0; i<N; i++){
        if(JOSHIs[i]-1 > -1) BUKAs[JOSHIs[i]-1]++;
    }

    for(int i=0; i<N; i++){
        cout << BUKAs[i] << endl;
    }

    return 0;
}