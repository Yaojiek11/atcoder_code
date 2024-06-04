#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <stack>
#include <queue>
using namespace std;
using ll = long long int;
int main(){
    //紙に書けばわかりやすい。
    long int A, B, C;
    long int K;
    cin >> A >> B >> C >> K;
    if(A<B){
        if(K%2==0){
            cout << A-B << endl;
        }else if(K%2==1){
            cout << (A-B) * (-1) << endl;
        }
    }else if(A>B){
        if(K%2==0){
            cout << A-B << endl;
        }else if(K%2==1){
            cout << (A-B) * (-1) << endl;
        }
    }else if(A==B){
        cout << 0 << endl;
    }else if(abs(A-B)>1000000000000000000){
        cout << "Unfair" << endl;
    }
    return 0;
}