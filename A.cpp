//Simple Explaination : Find the second minimum element in the array.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
 ll n;
 cin>>n;
 vector<int> v(n);
 for(int i = 0 ; i<n ;i++){
    cin>>v[i];
 }
 ll mn = *min_element(v.begin(),v.end());
 for(int i = 0 ;i<n ;i++){
    if(v[i]!=mn){
        cout<<v[i]<<"\n";
        return 0;
    }
 }
cout<<"NO\n";

}
