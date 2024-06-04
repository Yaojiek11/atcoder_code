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
int main(){
    long long int K;
    cin >> K;
    if(K<10){
        for(int i=1; i<=K; i++){
            cout << i << endl;
        }
        return 0;
    }else if(K>=10){
        long long int count = 0;
        for(int i=1; i<=9; i++){
            cout << i << endl;
            count++;
        }
        long long int i = 19;
        for(;;){
            cout << i << endl;
            i+=10;
            count++;
            if(count==K){
                break;
            }
        }
    }
    return 0;
}