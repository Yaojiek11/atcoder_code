#include <bits/stdc++.h>
using namespace std;
#define INF 100000000
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define rep(i, n) for(int (i)=1; (i)<=(n); (i)++)
typedef pair<int, int> P;
typedef long long ll;
int main(){
    int N;
    cin >> N;
    map<string, int> mp;

    REP(i, N){
        string str;
        cin >> str;
        mp[str]++;
    }

    cout << "AC" << " x " << mp["AC"] << endl;
    cout << "WA" << " x " << mp["WA"] << endl;
    cout << "TLE" << " x " << mp["TLE"] << endl;
    cout << "RE" << " x " << mp["RE"] << endl;

    return 0;
}