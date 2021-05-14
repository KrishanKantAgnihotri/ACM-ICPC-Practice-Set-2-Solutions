         
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll n;
cin>>n;
vector<pair<int,int>> v(n);
for(int i = 0 ;i<n; i++){
    cin>>v[i].first>>v[i].second;
}
for(int i = 0 ;i<n ;i++){
    for(int j = i+1 ;j<n ;j++){
        if((v[i].first+v[i].second == v[j].first )&&(v[j].first+v[j].second == v[i].first)){
            cout<<"YES\n";
            return 0 ;         }
    }
}
cout<<"NO\n";
}
