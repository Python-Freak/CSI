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
    int n;
    cin >> n;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int S = a + b + c + d;
    int renk = 1;
    for (int i = 2; i <= n; i++)
    {
        cin >> a >> b >> c >> d;
        if (a + b + c + d > S)
        {
            renk++;
        }
    }
    cout << renk;
    return 0;
};