#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <string>

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

long long fact(long long n)
{
    if (n == 0)
        return 1;
    long long res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

long long nCr(long long n, long long r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main(int args, char *argc[])
{
    // CODE HERE
    int n, t;
    cin >> n >> t;
    arr(a, n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int elem;
        cin >> elem;
        if (5 - elem >= t)
        {
            a[count++] = elem;
        }
    }
    if (count < 3)
    {
        cout << 0 << endl;
        return 0;
    }
    else if (count == 3)
    {
        cout << 1 << endl;
        return 0;
    }
    else
    {
        cout << (int)count / 3 << endl;
    }

    return 0;
};