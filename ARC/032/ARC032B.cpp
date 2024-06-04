#include <iostream>
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
#define ll long long
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define rep(i, n) for(int (i)=1; (i)<=(n); (i)++)
typedef pair<int, int> P;
int par[10000000];

//n要素で初期化
void init(int n){
    REP(i, n){
        par[i] = i; //はじめはすべての頂点は親
    }
}

int find(int x){
    if(par[x] == x) return x;
    else return par[x] = find(par[x]); 
}

bool same(int x, int y){
    return find(x) == find(y);
}

void unite(int x, int y){
    x = find(x);
    y = find(y);
    if(x == y) return;
    par[x] = y;
    return;
}

int main(){
    int N, M;
    int t = 0;
    cin >> N >> M;
    vector<int> a(100001);
    vector<int> b(100001);
    init(N);
    for(int i=0; i<M; i++){
        cin >> a[i] >> b[i];
        unite(a[i], b[i]);
    }
    for(int i=0; i<N; i++){
        if(i == par[i]) t++; //親の数を計算
    }
    cout << t-1 << endl; //最小本数は(親の数-1)
    return 0;
}