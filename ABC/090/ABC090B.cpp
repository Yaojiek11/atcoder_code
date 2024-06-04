#include <iostream>
#include <string>
using namespace std;
int main(){
    int A, B;
    cin >> A >> B;
    int res=0;
    for(int i = A; i<=B; i++){
        string temp = to_string(i);
        if(temp[4]==temp[0] && temp[3]==temp[1]){
            res++;
        }
    }
    cout << res << endl;
    return 0;
}