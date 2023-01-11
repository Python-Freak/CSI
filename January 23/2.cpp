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

bool checkPrime(int a)
{
    int isPrime = true;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            isPrime = false;
            return false;
        }
    }
    return isPrime;
}

int main(int args, char *argc[])
{
    // CODE HERE
    int n, m;
    cin >> n >> m;
    if (checkPrime(m))
    {
        for (int i = n + 1; i < m; i++)
        {
            if (checkPrime(i))
            {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
};