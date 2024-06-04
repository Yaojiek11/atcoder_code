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
    string S, T;
    cin >> S;
    cin >> T;
    for(int i=0; i<S.size(); i++){
        S.insert(S.begin(), S[S.size()-1]);
        S.erase(--S.end());
        if(S == T){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}