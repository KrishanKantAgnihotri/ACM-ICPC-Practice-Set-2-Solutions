//Simple Explanation: Iterate  over all (i,j) pair such that  aj divides ai and find the maximum value of aj/ai and count the frequency of same.         
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll n;
cin>>n;
vector<ll> v(n);
for(int i = 0 ; i<n ;i++) cin>>v[i];
    ll m;
cin>>m;
vector<ll> v2(m);
for(int j = 0 ;j<m ;j++) cin>>v2[j];
    ll mx = INT_MIN;
for(int i = 0 ;i<n ;i++){
    for(int j = 0 ;j<m ;j++)
        if(v2[j]%v[i]==0)
            mx = max(mx,v2[j]/v[i]);
}
ll cnt = 0 ; 
for(int i = 0 ;i<n ;i++){
    for(int j = 0 ;j<m ;j++)
        if( (v2[j]%v[i]==0) && (v2[j]/v[i]==mx))
            cnt++;
}
cout<<cnt<<endl;
}
