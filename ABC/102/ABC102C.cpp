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
typedef long long ll;
int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    REP(i, N) cin >> A[i];

    int t;
    REP(i, N){
        t = A[i] - (i+1);
        B[i] = t;
    }

    sort(B.begin(), B.end());
    //REP(i, N) cout << B[i] << endl;
    
    int b;
    if(N%2==0){
        b = (B[N/2]+B[N/2-1])/2;
    }else{
        b = B[N/2];
    }
    //cout << N/2 << endl;
    //cout << b << endl;
    int temp;
    int ans = 0;
    REP(i, N){
        temp = B[i] - b;
        ans += abs(temp);
    }
    cout << ans << endl;
    return 0;
}