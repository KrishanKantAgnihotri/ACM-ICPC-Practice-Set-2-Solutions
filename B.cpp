
//Simple Explanation:  Brute force all pairs having difference <= d       

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

 ll n,d;
 cin>>n>>d;
 vector<int> v(n);
 for(int i = 0 ; i<n ;i++)
    cin>>v[i];
 ll cnt = 0 ; 
 for(int i =0 ; i<n; i++){
    for(int j = 0 ;j<n ;j++){
        if( i== j) continue;
        if(abs(v[i]-v[j])<=d) cnt++;
    }
 }
 cout<<cnt<<endl;
}
