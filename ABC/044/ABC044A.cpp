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
    int N, K, X, Y;
    cin >> N >> K >> X >> Y;
    if(N >= K){
        cout << X*K + (N-K)*Y << endl;
    }else if(N < K){
        cout << X*N << endl;
    }
    return 0;
}