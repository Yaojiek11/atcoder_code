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
    int N;
    cin >> N;
    int t = N;
    int sum = 0;
    int dig;
    while(t){
        dig = t % 10;
        sum = sum + dig;
        t = t / 10;
    }
    if(N % sum == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}