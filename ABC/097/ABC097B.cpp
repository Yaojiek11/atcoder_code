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
    /*int X;
    cin >> X;
    if(X == 1 || X == 2){
        cout << 1 << endl;
        return 0;
    }
    int max = 0;
    int t;
    for(int i=1; i<=sqrt(X); i++){
        t = i;
        for(int j=2; j<X; j++){
            t = t * i;
            if(max < t && t <= X){
                max = t;
            }
            if(t >= X) break;
        }
    }
    cout << max << endl;*/

    int X;
    cin >> X;
    int ans = 1;
    for(int b=2; b<=X; b++){
        int power = b * b;
        for(int p=2; ; p++){
            if(power > X) break;
            ans = max(ans, power);
            power *= b;
        }
    }
    cout << ans << endl;
    return 0;
}