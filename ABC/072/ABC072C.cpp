#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    int N;
    int max = 0;
    int min = 100000;
    int max_res = 0;
    map<int, int>mp;
    cin >> N;
    vector<int> a(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
        if(max < a[i]){
            max = a[i];
        }
        if(min > a[i]){
            min = a[i];
        }
        mp[a[i]]++;
    }

    int ans = 0;

    for(int X=min; X<=max; X++){
        int res = 0;
        res += mp[X];
        res += mp[X + 1];
        res += mp[X - 1];
        if(ans < res) ans = res;
    }

    cout << ans << endl;

    return 0;
}