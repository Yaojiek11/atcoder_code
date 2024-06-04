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
    ll a, b, x;
    cin >> a >> b >> x;
    ll ans1 = 0;
    ll ans2 = 0;
    for(ll i=0; i<=b; i++){
        if(i%x == 0){
            ans1++;
        }
    }
    cout << ans << endl;
    return 0;
}