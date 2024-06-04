#include <iostream>
using namespace std;
int main(){
    int a, b, n;
    cin >> a >> b >> n;
    int i = n;
    for(;;){
        if(i%a==0 && i%b==0){
            cout << i << endl;
            return 0;
        }
        i++;
    }
    return 0;
}