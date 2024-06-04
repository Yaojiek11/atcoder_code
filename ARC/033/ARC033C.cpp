#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <utility>
using namespace std;
#define INF 100000000
#define ll long long
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define rep(i, n) for(int (i)=1; (i)<=(n); (i)++)
typedef pair<int, int> P;
const int MOD = 1e9 + 7;

const int MAX_N = 1 << 18;
int sz;
ll seg[MAX_N * 2];
struct segtree{
    segtree(int n){
        sz = 1;
        while(sz < n) sz *= 2; //要素数は2のべき乗
    }
    void update_add(int k){
        k += sz - 1;
        seg[k]++;
        while(k > 0){
            k = (k - 1) / 2;
            seg[k] = seg[k*2+1]+seg[k*2+2];
        }
    }
    void update_dic(int k){
        k += sz - 1;
        seg[k]--;
        //更新
        while(k > 0){
            k = (k-1)/2;
            seg[k] = seg[k*2+1]+seg[k*2+2];
        }
    }
    ll query(int a, int b, int k=0, int l=0, int r=sz){
        if(r <= a || b <= l) return 0; //対象外
        if(a <= l && r <= b) return seg[k]; //完全に含まれている
        ll x = query(a, b, k * 2 + 1, l, (l + r) / 2);//左の子の和
        ll y = query(a, b, k * 2 + 2, (l + r) / 2, r);//右の子の和
        return x + y; //和
    }
};

int q;
int main(void){
    segtree st(200000);
    cin >> q;
    REP(i, q){
        int t;
        cin >> t;
        int x;
        cin >> x;
        if(t == 1){
            st.update_add(x);
        }else{
            int l = 1;
            int r = 200001;
            while(r - l > 1){
                int mid = (l+r)/2;
                if(st.query(0, mid)<x) l = mid;
                else r = mid;
            }
            cout << l << endl;
            st.update_dic(l);
        }
    }
    return 0;
}