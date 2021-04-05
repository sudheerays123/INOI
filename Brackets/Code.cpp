#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long int

int main() {

    fast;

    ll n,k;
    cin >> n >> k;

    vector<ll> value(n+5);
    vector<ll> bracket(n+5);
    
    for(ll i = 1; i <= n; i++) cin >> value[i];
    for(ll i = 1; i <= n; i++) cin >> bracket[i];

    vector<vector<ll>> dp(n+5,vector<ll>(n+5));

    // dp[i][j] = maximum sum possible of well bracketed sequence if we consider only from i to j ( both inclusive )

    // base case :

    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= i-1; j++) {
            dp[i][j] = -1;
        }
    }
    for(ll i = 1; i <= n; i++) dp[i][i]= 0;
    for(ll i = 1; i <= n-1 ; i++){
        if(bracket[i+1]-bracket[i] == k){
            dp[i][i+1] = value[i] + value[i+1];
        }
    }

    // recurrence :

    for(ll diff = 2; diff <= n-1; diff++){
        
        ll i = 1;
        ll j = 1+diff;

        while(j <= n){

            if(bracket[j]-bracket[i] == k){
                dp[i][j] = value[i]+value[j]+dp[i+1][j-1];
            }
            else{
                dp[i][j] = max(dp[i][j-1],dp[i+1][j]);
            }

            for(ll m = i+1; m <= j; m++){
                dp[i][j] = max(dp[i][j],dp[i][m-1]+dp[m][j]);
            }

            i++;
            j++;
        }
    }

    // answer :

    cout << dp[1][n];

    return 0;
}
