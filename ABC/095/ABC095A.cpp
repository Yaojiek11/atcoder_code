#include <iostream>
#include <string>
using namespace std;
int main(){
    string S;
    cin >> S;
    int t=0;
    for(int i=0; i<3; i++){
        if(S[i]=='o'){
            t+=100;
        }
    }
    cout << 700+t << endl;
    return 0;
}