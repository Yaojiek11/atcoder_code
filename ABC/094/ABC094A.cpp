#include <iostream>
using namespace std;
int main(){
    int A, B, X;
    cin >> A >> B >> X;
    /*if(X>=A){
        if(B >= X-A){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;           // A <= X <= A+B
        }
    }else{
        cout << "NO" << endl;
    }*/
    if(A <= X && X <= A+B){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}