#include <iostream>
using namespace std;
int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int i=1;
    while(true){
        if(i%A==0 & i%B==C){
            cout << "YES" << endl;
            return 0;
        }
        if(i > 5050){
            cout << "NO" << endl;
            return 0;
        }
        i++;
    }
}