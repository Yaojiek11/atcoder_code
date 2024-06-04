#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int N;
    int x = 0;
    int ans = 0;
    cin >> N;
    string S;
    cin >> S;
    for(int i=0; i<N; i++){
        if(S[i]=='I'){
            x++;
        }else if(S[i]=='D'){
            x--;
        }
        if(ans < x){
            ans = x;
        }
    }
    cout << ans << endl;
    return 0;
}