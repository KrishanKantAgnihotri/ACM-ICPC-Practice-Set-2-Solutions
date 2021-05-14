         
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    if (n == 1 || n == 2) cout << n << '\n';
    else {
    int ans = -1;
        for (int i = 0; i < n; ++i)
        {
            int curr = 1;
            for (int j = i; j > 0; --j, ++curr) if (a[j-1] > a[j]) break;
            for (int j = i; j < n-1; ++j, curr++) if (a[j+1] > a[j]) break;
            ans = max(ans, curr);
        }
        cout << ans << '\n';
    }
}
