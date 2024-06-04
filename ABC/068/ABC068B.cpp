#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=0; i<20; i++){
        if(N < (1<<(i+1))){
            cout << (1<<i) << endl;
            break;
        }
    }
    return 0;
}