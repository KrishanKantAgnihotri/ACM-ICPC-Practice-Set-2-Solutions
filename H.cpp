// Simple Explanation: Iterate over all triplet (ai,aj,ak) and check for conditon.         
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll n=6;
vector<int> v(n);
ll sum = 0 ; 
for(int i = 0 ; i<n ;i++) cin>>v[i],sum+=v[i];
    for(int i  = 0 ; i<n ;i++){
        for(int j = i+1 ;j<n ;j++){
            for(int k = j+1 ;k<n ;k++){
                if(sum-(v[i]+v[j]+v[k])==(v[i]+v[j]+v[k])){
                    cout<<"YES\n";
                    return 0 ; 
                }
            }
        }
    }
 cout<<"NO\n";
}
