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
    int N;
    string S;
    cin >> N;
    cin >> S;
    int ans = 0;
    for(int i=1; i<N; i++){
        int cnt = 0;
        for(char c = 'a'; c <= 'z'; c++){
            bool left=false, right=false;
            for(int j=0; j<i; j++){
                if(S[j] == c) left=true;
            }
            for(int j=i; j<N; j++){
                if(S[j] == c) right=true;
            }
            if(left&&right) cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}