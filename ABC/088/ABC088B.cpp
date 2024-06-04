#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <stack>
#include <queue>
using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    REP(i, N) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    int ans = 0;
    for(int i=0; i<N; i+=2){
        ans += a[i];
    }
    for(int i=1; i<N; i+=2){
        ans -= a[i];
    }
    cout << ans << endl;
    return 0;
}