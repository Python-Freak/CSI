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

int main(int args, char *argc[])
{
    // CODE HERE
    int cases;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                ans++;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int total = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
                total++;
        }
        cout << min(total, ans) << "\n";
    }

    return 0;
};