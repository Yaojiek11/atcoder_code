#include <iostream>
#include <vector>
#include <map>
using ll = long long int;
using namespace std;
int main(){
    ll N;
    cin >> N;
    ll ans = 0;
    vector<int> A(N);
    ll s = 0;
    map<ll, ll> mp;
    mp[s]++;

    for(ll i=0; i<N; i++) cin >> A[i];

    for(ll j=0; j<N; j++){
        s += A[j];
        ans += mp[s];
        mp[s]++;
    }
    
    cout << ans << endl;
    return 0;
}