#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define MAX(a, b) (a > b ? a : b)
#define MIN(a, b) (a < b ? a : b)

void solve() 
{
	int n; cin >> n;
	vector <int> v(n+1);
	for(int i = 1; i <= n; i++) {
		int x; cin >> x;
		v[x] = i;
	}
	int ans = 0;
	for(int i = n / 2; i > 0; i--) {
		if(v[i] > v[i+1] or v[n - i + 1] < v[n - i]) {
			ans = i;
			break;
		}
	}
	cout << ans << endl;
}

int32_t main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	cin >> t;
	while(t--)
        solve();
}