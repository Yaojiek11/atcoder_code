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

int main()
{
	long long ans = 0, i = 0, j = 0, k = 0, H, W, a[500][500], x1[250000], y1[250000], x2[250000], y2[250000];
	cin >> H >> W;
	for (i = 0; i < H; i++) {
		for (j = 0; j < W; j++) {
			cin >> a[i][j];
		}
	}
 
	for (i=0; i < H; i++) {
		for (j=0; j < W-1; j++) {
			if (a[i][j] % 2) {
				x1[k] = i; y1[k] = j; x2[k] = i; y2[k++] = j + 1;
				a[i][j]--; a[i][j + 1]++;
			}
		}
		if ((a[i][j] % 2)&&(i<H-1)) {
			x1[k] = i; y1[k] = j; x2[k] = i+1; y2[k++] = j;
			a[i][j]--; a[i + 1][j]++;
		}
	}
 
	cout << k << endl;
	for (i = 0; i < k; i++) {
		cout << x1[i]+1 << " " << y1[i]+1  << " " << x2[i]+1 << " " << y2[i]+1 << endl;
	}
	return 0;
}