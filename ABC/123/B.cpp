#include <iostream>
#include <limits>
#include <numeric>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <utility>
using namespace std;
#define INF 100000000
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define rep(i, n) for(int (i)=1; (i)<=(n); (i)++)
typedef pair<int, int> P;
typedef long long ll;
int main(){
    int a[5];
    REP(i, 5) cin >> a[i];
    int t = 200;
    int ind;
    int sum = 0;
    int ans = 0;
    REP(i, 5){
        if(a[i]%10 != 0){
            break;
        }else{
            ans += a[i];
            if(i == 4){
                cout << ans << endl;
                return 0;
            }
        }
    }
    ans = 0;
    REP(i, 5){
        if(a[i]%10 != 0 && t >= a[i]%10){
            t = a[i]%10;
            ind = i;
            sum += a[i];
            sum = sum + (10 - a[i]%10);
        }
        else if(a[i]%10 == 0){
            sum += a[i];
        }else{
            sum += a[i];
            sum = sum + (10 - a[i]%10);
        }
        /*cout << sum << endl;
        cout << "ind = " << ind << endl;*/
    }
    //cout << ind << endl;
    ans = sum - (10 - a[ind]%10);
    cout << ans << endl;
    /*REP(i, 5) cout << a[i]%10 << endl;
    cout << t << endl;*/
    
    return 0;
}