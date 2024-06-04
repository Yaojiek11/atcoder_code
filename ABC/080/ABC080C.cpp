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
typedef long long int ll;
int main(){
    int N;
    cin >> N;

    int F[101][11], P[101][11];

    for(int i=0; i<N; i++){
        for(int j=0; j<10; j++){
            cin >> F[i][j];
        }
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<11; j++){
            cin >> P[i][j];
        }
    }

    ll ans = -(1<<30);

    for(int bit = 1; bit < (1<<10); bit++){ //自店の営業時間を決定
		ll x = 0;
		for(int i = 0; i < N; i++){     //N個分の店との組み合わせ
			int cnt = 0;
			for(int j = 0; j < 10; j++){
				if((bit>>j&1) && F[i][j]) cnt++; //共通営業の回数計算(1の個数を計算)
			}
			x += P[i][cnt];
		}
		if(ans<x) ans = x;
	}
    cout << ans << endl;
    return 0;
}