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
    int D, N;
    cin >> D >> N;
    int ans = 1;
    if(N == 100){
        if(D == 0) ans = 101;
        else if(D == 1) ans = 10100;
        else if(D == 2) ans = 1010000;
    }else{
        for(int i=0; i<D; i++){
            ans = ans * 100;
        }
        ans = N * ans;
    }
    cout << ans << endl;
    return 0;
}