//Coded By Vishal Mourya
#include<bits/stdc++.h>
#define ll long long int
#define vec vector<ll>
#define f(var,a,b) for(ll var = a ; var < b ; var++ )
#define fr(var,a,b) for(ll var = a ; var > b ; var-- )
#define fasthoja ios_base::sync_with_stdio(false); cin.tie(NULL);
#define dbg(x)     cerr<< #x << " : "<< x << endl;
using namespace std;

void k_closest_numbers( vec &v , ll k , ll x ) {
    ll n = v.size();

    priority_queue< pair<ll,ll> > maxH; // abs( v[i] - x ) , v[i]

    f(i,0,n) {
        maxH.push( { abs( v[i] - x ) , v[i] } );

        if( maxH.size() > k ) {
            maxH.pop();
        }
    }

    while( !maxH.empty() ) {
        cout << maxH.top().second << " ";
        maxH.pop();
    }

}

int main(void){
    fasthoja;
    ll t; cin>>t;
    while(t--){
        ll n; cin >> n;
        vec v(n); f(i,0,n) cin >> v[i];

        ll k,x; cin >> k >> x;

        k_closest_numbers( v , k , x );
    }//end of test case loop
    return 0;
}