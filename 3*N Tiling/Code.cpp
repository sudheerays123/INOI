#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long int
#define MOD 1000000007

int main() {

    fast;

    ll test;
    cin >> test;

    while(test--) {

        ll k,n;
        cin >> k >> n;

        if(k == 1){
            if(n%3 == 0) cout << "1\n";
            else cout << "0\n";
        }

        if(k == 2){
            vector<ll> dp(n+5);

            dp[1] = 0;
            dp[2] = 1;
            dp[3] = 1;

            for(ll i = 4; i <= n; i++){
                dp[i] = dp[i-2] + dp[i-3];
                dp[i] %= MOD;
            }

            cout << dp[n]%MOD << "\n";
        }

        if(k == 3){

            vector<ll> f(n+5);
            vector<ll> g(n+5);
            vector<ll> h(n+5);

            f[1] = 1;
            f[2] = 1;
            f[3] = 2;

            g[1] = 0;
            g[2] = 0;
            g[3] = 1;

            h[1] = 0;
            h[2] = 1;
            h[3] = 1;

            for(ll i = 4; i <= n; i++){
                f[i] = f[i-1] + f[i-3] + 2*g[i-3];
                g[i] = h[i-1]+g[i-3];
                h[i] = f[i-2]+h[i-3];

                f[i] %= MOD;
                g[i] %= MOD;
                h[i] %= MOD;
            }

            cout << f[n]%MOD << "\n";
        }
    }

    return 0;
}
