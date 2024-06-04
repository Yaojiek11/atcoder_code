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

int saisyo(ll max, ll min, ll t){
    ll s = max - min;
    ll a = t;
    if(s < a){
        return s;
    }else if(a <= s){
        return a;
    }
}

int main(){
    int H, W;
    int h; //Aの高さ
    int h2; //Bの高さ
    int w; //Bの横の長さ
    ll SA, SB, SC;
    ll Smax, Smin;
    ll ans= H * W;
    cin >> H >> W;
    for(int i=1; i<H; i++){
        h = i;
        SA = h * W;
        w = W/2;
        SB = (H-h) * w;
        SC = (H-h) * (W-w);
        Smax = max({SA, SB, SC});
        Smin = min({SA, SB, SC});
        ans = saisyo(Smax, Smin, ans);

        h2 = (H-h)/2;
        SB = h2 * W;
        SC = (H - (h+h2)) * W;
        Smax = max({SA, SB, SC});
        Smin = min({SA, SB, SC});
        ans = saisyo(Smax, Smin, ans);
    }

    swap(H, W);
    for(int i=1; i<H; i++){
        h = i;
        SA = h * W;
        w = W/2;
        SB = (H-h) * w;
        SC = (H-h) * (W-w);
        Smax = max({SA, SB, SC});
        Smin = min({SA, SB, SC});
        ans = saisyo(Smax, Smin, ans);

        h2 = (H-h)/2;
        SB = h2 * W;
        SC = (H - (h+h2)) * W;
        Smax = max({SA, SB, SC});
        Smin = min({SA, SB, SC});
        ans = saisyo(Smax, Smin, ans);
    }
    
    cout << ans << endl;
    return 0;
}