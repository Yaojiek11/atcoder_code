#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <limits>
#include <numeric>
using namespace std;
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)

int gcd( int m, int n )
{
	// 引数に０がある場合は０を返す
	if ( ( 0 == m ) || ( 0 == n ) )
		return 0;
	
	// ユークリッドの方法
	while( m != n )
	{
		if ( m > n ) m = m - n;
		else         n = n - m;
	}
	return m;
}//gcd

int lcm( int m, int n )
{
	// 引数に０がある場合は０を返す
	if ( ( 0 == m ) || ( 0 == n ) )
		return 0;
	
	return ((m / gcd(m, n)) * n); // lcm = m * n / gcd(m,n)
}//lcm

int lcm_n(vector<int> &numbers) {
	int l;
	l = numbers[0];
	for (int i = 1; i < numbers.size(); i++) {
		l = lcm(l, numbers[i]);
	}
	return l;
}

int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    REP(i, N) cin >> a[i];
    //cout << lcm_n(a) << endl;
    int lcm_num = lcm_n(a);
    int ans=0;
    int temp;
    for(int l=lcm_num; l>=0; l--){
        temp = 0;
        REP(i, N){
            temp += l % a[i];
        }
        ans = max(ans, temp);
    }
    cout << ans << endl;
    return 0;
}