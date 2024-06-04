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
    long long K;
    cin >> N >> K;
    vector<int> s(N);
    REP(i, N) cin >> s[i];

    bool allGreaterThanK = true;
    for(int i=0;i<N;i++){
        if(s[i] == 0){
            cout << N << endl;
            return 0;
        }
        if(s[i] <= K){
            allGreaterThanK = false;
        }
    }
 
    if(allGreaterThanK){
        cout << 0 << endl;
        return 0;
    }

    int res = 0;
    int right = 0;
    long long sum = 1;
    for(int left=0; left<N; left++){
        while(right < N && sum*s[right] <= K){
            sum *= s[right];
            right++;
        }
        res = max(res, right-left);
        if(left == right) right++;
        else sum/=s[left];
    }
    cout << res << endl;
    return 0;
}