#include <bits/stdc++.h>
#include <fstream>

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

void solve(int *a, int n)
{
    int i = 0;
    int j = n - 1;
    for (int k = 0; k < n; k++)
    {
        if (k & 1)
        {
            cout << a[j--];
        }
        else
        {
            cout << a[i++];
        }
        cout << " ";
    }
    cout << endl;
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
        arr(a, n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        solve(a, n);
    }

    return 0;
};