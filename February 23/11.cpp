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

int main(int args, char *argc[])
{
    // CODE HERE
    int cases;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        int time, h, m;
        cin >> h >> m;
        time = 60 * h + m;
        int ans = 24 * 60;
        for (int i = 0; i < n; ++i)
        {
            cin >> h >> m;
            int t = 60 * h + m - time;
            if (t < 0)
                t += 24 * 60;
            if (t < ans)
            {
                ans = t;
            }
        }
        cout << ans / 60 << " " << ans % 60 << endl;
    }
    return 0;
};