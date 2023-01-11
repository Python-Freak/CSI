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
    int a, b;
    cin >> a >> b;
    float fac = (float)b / a;
    if ((fac - (int)fac) != 0)
    {
        cout << -1 << endl;
        return 0;
    }
    int faci = (int)fac;
    int steps = 0;
    while (faci > 1)
    {
        if (faci % 3 == 0)
        {
            steps++;
            faci /= 3;
        }
        else if (faci % 2 == 0)
        {
            steps++;
            faci /= 2;
        }
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << steps << endl;
    return 0;
};