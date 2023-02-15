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
        int sum = 0;
        arr(a, n);
        loop(i, n)
        {
            cin >> a[i];
            sum += a[i];
        }
        int i = 0;
        for (; i < n; i++)
        {
            int s = sum - a[i];
            if (s == a[i] * (n - 1))
            {
                cout << "YES" << endl;
                break;
            }
        }
        if (i == n)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
};