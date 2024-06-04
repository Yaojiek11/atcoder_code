#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll =long long int;
using le =long double;
int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> T(N);

    for(int i=0; i<N; i++){
        cin >> A[i] >> T[i];
    }
    
    ll a = 1;
    ll t = 1;

    for(int j=0; j<N; j++){
        ll n;
        n = max(ceil(le(a)/A[j]), ceil(le(t)/T[j]));
        a = n*A[j];
        t = n*T[j];
    }

    cout << a + t << endl;

    return 0;
}