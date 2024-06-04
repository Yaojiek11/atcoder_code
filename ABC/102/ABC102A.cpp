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
    int ans;
    if(N%2==0){
        ans = N;
    }else{
        ans = N*2;
    }
    cout << ans << endl;
    return 0;
}