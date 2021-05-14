//Simple Explanation: Scan through the array and find how many times minimum and maximum changes.          
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    vector<int> v(n);
    for(int i =0 ; i<n;i++) cin>>v[i];
    ll a = v[0];
    ll b = v[0];
    ll cnt = 0 ; 
    for(int  i = 1 ;i<n;i++){
        if(v[i]>a)
            a = v[i],cnt++;
        if(v[i]<b)
            b = v[i],cnt++;

    }
    cout<<cnt<<endl;
}
