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
using ll = long long int;
int main(){
    ll N, T;
    cin >> N >> T;
    vector<ll> t(N);
    for(int i=0; i<N; i++) cin >> t[i];
    ll ans = 0;
    int s;
    for(int i=0; i<N; i++){
        if(i==N-1){
            s = T;
        }else{
            s = min(T, t[i+1]-t[i]);
        }
        ans += s;
    }
    cout << ans << endl;
    return 0;
}