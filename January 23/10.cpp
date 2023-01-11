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
    cin >> a;
    int a_m = -1, b_m = -1;
    for (int i = 0; i < a; i++)
    {
        int elem;
        cin >> elem;
        if (elem > a_m)
        {
            a_m = elem;
        }
    }
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        int elem;
        cin >> elem;
        if (elem > b_m)
        {
            b_m = elem;
        }
    }
    cout << a_m << " " << b_m << endl;

    return 0;
};