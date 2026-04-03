#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;

#define F(i, n) for (ll i = 1; i <= n; i++)
#define fastio cin.tie(0)->sync_with_stdio(0)
#define INF 1e9
#define MX 1

unordered_map<int, int> dp;

int main()
{
    fastio;

    int n;
    cin >> n;

    F(i, n)
    {
        int t;
        cin >> t;

        dp[t] = dp[t - 1] + 1;
    }

    int mx = 0;
    for (auto [s, c] : dp)
        mx = max(mx, c);

    cout << mx;

    return 0;
}
// DP로 쉽게 풀이가 가능하다.
// 입력 t를 받을 때 마다
// dp[t] = dp[t - 1] + 1로 기록을 해주면 된다.
