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
        if (n == 2 or (n % 2 != 0))
        {
            cout << -1 << endl;
        }
        else
        {
            n /= 2;
            cout << (n + 2) / 3 << " " << n / 2 << endl;
        }
    }
    return 0;
};