//Simple Explanation: Generate all the subarrays and take their xor and choose maximum from them.         
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll n;
cin>>n;
vector<int> v(n);
ll ans = INT_MIN;
for(int i = 0 ;i<n ;i++) cin>>v[i];
for(int i = 0 ;i<n ;i++){
    for(int j = 0 ;j<n;j++){
        ll x = 0 ; 
        for(int k  = i ;k<=j ;k++) x^=v[k];
            ans = max(ans,x);

    }
}
cout<<ans<<endl;
}
