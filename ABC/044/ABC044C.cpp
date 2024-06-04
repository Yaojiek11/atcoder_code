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
using ll = long long;
int main(){
    int N, A;
    cin >> N >> A;
    vector<int> x(N);
    vector<int> y(N+1);
    for(int i=0; i<N; i++) cin >> x[i];

    y[0] = 0;
    for(int i=0; i<N; i++){
        y[i+1] = y[i] + x[i];
    }
    /*for(int i=0; i<N+1; i++) cout << y[i] << endl;
    cout << y.size() << endl;*/

    int ans = 0;
    for(int i=1; i<=N; i++){
        for(int j=i; j<N+1; j++){
            if(y[j]-y[j-i] == A*i){
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}