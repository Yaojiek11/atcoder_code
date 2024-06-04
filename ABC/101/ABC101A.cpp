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
int main(){
    string S;
    cin >> S;
    int ans = 0;
    for(int i=0; i<4; i++){
        if(S[i] == '+'){
            ans++;
        }else if(S[i] == '-'){
            ans--;
        }
    }
    cout << ans << endl;
    return 0;
}