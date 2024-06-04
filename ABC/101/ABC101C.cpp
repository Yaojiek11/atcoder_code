#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <stack>
#include <queue>
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
using namespace std;
int main(){
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    int ans;
    if((N-K)%(K-1) != 0){
        ans = (N-K)/(K-1) + 1 + 1;
    }else{
        ans = (N-K)/(K-1) + 1;
    }
    cout << ans << endl;
    return 0;
}