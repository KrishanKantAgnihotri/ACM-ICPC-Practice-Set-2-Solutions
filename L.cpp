         
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
     vector<int> v(n);
     ll sum = 0 ; 
     for(int i = 0 ; i<n;i++){
      cin>>v[i];
      sum+=v[i];
     }
     vector<int> ans;
     for(int i = 0 ;i<n;i++){
        if(sum-v[i]==v[i]*(n-1)){
            ans.push_back(i+1);
        }
     }

     cout<<ans.size()<<endl;
     for(auto x: ans)
        cout<<x<<" ";
    cout<<endl;
}
