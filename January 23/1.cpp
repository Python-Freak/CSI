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
        lld n;
        cin >> n;
        arr(a, n);
        lld sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum > 0)
        {
            if (sum > n)
            {
                cout << sum - n << endl;
            }
            else if (sum == n)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
};