#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <list>
using namespace std;
using ll = long long;
int main(){
    int N;
    cin >> N;
    vector<int> P(N), Q(N);
    for(int i=0; i<N; i++) cin >> P[i];

    for(int i=0; i<N; i++){
        P[i]--;
        Q[P[i]] = i;
    }

    int cnt_max = 0;
    int cnt = 1;
    for(int i=0; i<N-1; i++){
        if(Q[i+1] > Q[i]){
            cnt++;
        }else{
            if(cnt_max < cnt){
                cnt_max = cnt;
            }
            cnt = 1;
        }
    }
    if(cnt_max < cnt){
        cnt_max = cnt;
    }
    cout << N-cnt_max << endl;
    return 0;
}