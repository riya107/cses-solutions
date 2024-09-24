#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------Debugging Functions------------------------------*/
template<class T>void print(T x){cerr<<x;}
template<class T,class V>void print(pair<T,V> x){print(x.ff);cerr<<':';print(x.ss);}
template<class T>void print(vector<T> &a){cerr<<'['<<' ';for(auto x:a){print(x);cerr<<' ';}cerr<<']';}
template<class T>void print(set<T> &a){cerr<<'['<<' ';for(auto x:a){print(x);cerr<<' ';}cerr<<']';}
template<class T>void print(set<T,greater<T>> &a){cerr<<'['<<' ';for(auto x:a){print(x);cerr<<' ';}cerr<<']';}
template<class T>void print(multiset<T> &a){cerr<<'['<<' ';for(auto x:a){print(x);cerr<<' ';}cerr<<']';}
template<class T>void print(multiset<T,greater<T>> &a){cerr<<'['<<' ';for(auto x:a){print(x);cerr<<' ';}cerr<<']';}
template<class T>void print(unordered_set<T> &a){cerr<<'['<<' ';for(auto x:a){print(x);cerr<<' ';}cerr<<']';}
template<class T,class V>void print(vector<pair<T,V>> &a){cerr<<'['<<' ';for(auto x:a){print(x.ff);cerr<<':';print(x.ss);cerr<<' ';}cerr<<']';}
template<class T,class V>void print(map<T,V> &a){cerr<<'['<<' ';for(auto i:a){print(i);cerr<<' ';}cerr<<']';}
template<class T,class V>void print(unordered_map<T,V> &a){cerr<<'['<<' ';for(auto i:a){print(i);cerr<<' ';}cerr<<']';}
template <class T>void print(vector<vector<T>> &a){cerr<<'['<<' ';for(auto i:a){print(i);cerr<<' ';}cerr<<']';}
/*-------------------------------------------------------------------------------------*/

void local(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

#ifndef ONLINE_JUDGE
    freopen("error.txt","w",stderr);
#endif

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<' ';print(x);cerr<<'\n';
#else
#define debug(x)
#endif
}

#define ll long long

void solve() {
    ll t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin >> x >> y;
        x--, y--;
        ll max_val = max(x, y);
        ll start = max_val * max_val + 1;
        ll end = (max_val + 1) * (max_val + 1);
        if (max_val % 2 == 0) {
            if (x < y) {
                cout << end - x << endl;
            } else {
                cout << start + y << endl;
            }
        } else {
            if (x < y) {
                cout << start + x << endl;
            } else {
                cout << end - y << endl;
            }
        }
    }
}

int main(){
    local();
    solve();
    return 0;
}