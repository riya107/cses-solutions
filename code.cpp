#include <bits/stdc++.h>
using namespace std;

#define ll long long

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

void solve(){
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0){
            cout<<n/2<<" ";
            n/=2;
        }
        else{
            cout<<n*3+1<<" ";
            n=n*3+1;
        }
    }
}

int main(){
    local();
    solve();
    return 0;
}