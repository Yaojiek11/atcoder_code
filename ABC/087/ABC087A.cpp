#include <iostream>
using namespace std;
int main(){
    int X, A, B;
    cin >> X >> A >> B;
    int res = X-A;
    while(res/B!=0){
        res = res - B;
    }
    cout << res << endl;
    return 0;
}