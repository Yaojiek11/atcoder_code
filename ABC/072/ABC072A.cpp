#include <iostream>
using namespace std;
int main(){
    int X, t, res;
    cin >> X >> t;
    res = X - t;
    if(res < 0){
        cout << 0 << endl;
    }else{
        cout << res << endl;
    }
    return 0;
}