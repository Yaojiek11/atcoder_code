#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int W, H, N;
    cin >> W >> H >> N;
    vector<int> x(N), y(N), a(N);
    for(int i=0; i<N; i++){
        cin >> x[i] >> y[i] >> a[i];
    }

    int lx = 0;
    int dy = 0;
    int rx = W;
    int uy = H;

    for(int i=0; i<N; i++){
        switch(a[i]){
            case 1:
                lx = max(lx, x[i]); //if(lx < x[i]) lx = x[i];
                break;
            case 2:
                rx = min(rx, x[i]); //if(rx > x[i]) rx = x[i]; 
                break;
            case 3:
                dy = max(dy, y[i]); //if(dy < y[i]) dy = y[i];
                break;
            case 4:
                uy = min(uy, y[i]); //if(uy > y[i]) uy = y[i];
                break;
        }
    }

    int ans = (rx-lx)*(uy-dy);
    if(rx<=lx || uy<=dy){
        ans = 0;
    }
    cout << ans << endl;
    return 0;
}