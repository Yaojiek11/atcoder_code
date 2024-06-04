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
using ll = long long;
int main(){
    int N;
    string s;
    cin >> N;
    cin >> s;
    int count = 0;
    int min = N;
    int i, j;

    //0番目の範囲を求める
    for(i=1; i<N; i++){
        if(s[i] == 'E') count++;
    }

    min = count;

    for(i=1; i<N; i++){
        if(s[i]=='E' && i<N){ //左側
            count--;
        }
        if(s[i-1]=='W'){ //左側
            count++;
        }

        if(count<min){
            min=count;
        }
    }
    cout << min << endl;
    return 0;
}