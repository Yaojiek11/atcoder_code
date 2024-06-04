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
using ll = long long int;
int main(){
    int N;
    cin >> N;
    vector<ll> a(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }
    int c = 0;
    bool two = false;
    for(;;){
        for(int i=0; i<N; i++){
            if(a[i] % 2 == 0){
                a[i] = a[i] / 2;
            }else{ 
                a[i] = a[i] * 3;
            }
        }
        c++;
        for(int i=0; i<N; i++){
            if(a[i] % 2 == 0){
                continue;
            }
        }
        break;
    }
    cout << c << endl;
    return 0;
}