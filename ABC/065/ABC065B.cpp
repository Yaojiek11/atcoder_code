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
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++) cin >> a[i];

    int now = a[0];
    int count = 0;

    for(;;){
        if(now == 2){
            count++;
            cout << count << endl;
            break;
        }
        if(count > N){
            cout << -1 << endl;
            break;
        }
        count++;
        now = a[now-1];
    }

    return 0;
}