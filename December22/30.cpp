#include <bits/stdc++.h>

using namespace std;

#define loop(i, n) for (int i = 0; i < n; i++)
#define lld long long int
#define arr(name, n) int *name = (int *)malloc(n * sizeof(int));
#define mod 1e9 + 7
#define flash                          \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);
#define sz(v) (int)v.size()

lld gcd(lld a, lld b)
{
    if (a == 0)
    {
        return b;
    }
    return gcd(b % a, a);
}

void solve()
{
    string s;
    cin >> s;
    set<char> v;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        v.insert(s[i]);
        if (sz(v) > 3)
        {
            ans++;
            v.clear();
            v.insert(s[i]);
        }
    }
    if (!v.empty())
        ans++;
    cout << ans << endl;
}

int main(int args, char *argc[])
{
    // CODE HERE
    int cases;
    cin >> cases;
    while (cases--)
    {
        solve();
    }

    return 0;
};