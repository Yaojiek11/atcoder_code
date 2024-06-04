#include <iostream>
#include <set>
using namespace std;
int main(){
    int N;
    cin >> N;
    set<int> A;
    for(int i=0; i<N; i++){
        int input;
        cin >> input;
        auto r = A.insert(input);
        //cout << r.second << endl;
        if(!r.second){
            A.erase(input);
        }
    }
    cout << A.size() << endl;
    return 0;
}