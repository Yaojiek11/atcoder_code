#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int ans = 0;
    vector<int> N(3);
    for(int i=0; i<3; i++){
        cin >> N[i];
    }
    int K;
    cin >> K;
    for(int i=0; i<3; i++){
        int max = *max_element(N.begin(), N.end());
        if(N[i] == max){
            for(int j=0; j<K; j++){
                N[i] = N[i] * 2;
            }
        }
        ans = ans + N[i];
    }

    cout << ans << endl;
    return 0;
}