#include <bits/stdc++.h>

using namespace std;

#define loop(i, n) for (int i = 0; i < n; i++)
#define lld long long int
#define arr(name, n) int *name = (int *)malloc(n * sizeof(int));
#define mod 1e9 + 7
#define flash                          \
    ios_base ::sync_with_stdio(false); \
    cin.tie(NULL);

lld gcd(lld a, lld b)
{
    if (a == 0)
    {
        return b;
    }
    return gcd(b % a, a);
}
lld pow__(lld a, lld b)
{
    lld ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % ((lld)mod);
        a = (a * a) % ((lld)mod);
        b >>= 1;
    }
    return ans;
}
vector<pair<lld, lld>> pFactorization(lld n)
{
    vector<pair<lld, lld>> ans;
    if (n > 1)
    {
        for (lld i = 2; i * i <= n; i++)
        {
            lld count = 0;
            while (n % i == 0)
            {
                count++;
                n /= i;
            }
            if (count)
                ans.push_back({i, count});
        }
        if (n > 1)
            ans.push_back({n, 1});
    }
    return ans;
}

void solve()
{
    // MAIN LOGIC
    int n;
    string s;
    int check[26] = {0};
    cin >> n;
    cin >> s;
    int res = 0;
    for (char x : s)
    {
        if (!check[x - 'A'])
        {
            res += 2;
            check[x - 'A'] = 1;
        }
        else
        {
            res++;
        }
    }
    cout << res << endl;
}

int main(int args, char *argc[])
{
    // CODE HERE
    flash;
    int cases = 1;
    bool MCASES = true;
    bool FILEMODE = false;

    if (FILEMODE)
    {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }

    if (MCASES)
        cin >> cases;

    while (cases--)
    {
        solve();
    }

    return 0;
};