#include <iostream>
using namespace std;
int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int ans;
    if(B >= A){
        if(C <= B/A){
            ans = C;
        }
        else ans = B/A;
    }else{
        ans = 0;
    }
    cout << ans << endl;
    return 0;
}