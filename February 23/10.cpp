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

bool isSorted(int *arr, int n)
{
    int isSorted = true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            isSorted = false;
            break;
        }
    }
    return isSorted;
}

bool b[1005];
int a[1005];

int main(int args, char *argc[])
{
    // CODE HERE
    int cases;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            b[i] = 0;

        if (n == 1)
        {
            cout << "-1\n";
            continue;
        }

        for (int i = 1; i <= n - 2; i++)
        {
            int k = 1;
            while (b[k] || k == a[i])
                ++k;
            cout << k << " ";
            b[k] = 1;
        }

        int k = -1, l = -1;
        for (int i = 1; i <= n; i++)
        {
            if (!b[i])
            {
                if (k == -1)
                    k = i;
                else
                    l = i;
            }
        }
        if (k != a[n - 1] && l != a[n])
            cout << k << " " << l << "\n";
        else
            cout << l << " " << k << "\n";
    }

    return 0;
};