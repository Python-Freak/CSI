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
    string a, b, c;
    cin >> a >> b >> c;

    arr(hash, 26);
    arr(check, 26);

    for (int i = 0; i < 26; i++)
    {
        hash[i] = 0;
        check[i] = 0;
    }
    for (int i = 0; i < a.length(); i++)
    {
        hash[a.at(i) - 'A']++;
    }
    for (int i = 0; i < b.length(); i++)
    {
        hash[b.at(i) - 'A']++;
    }

    for (int i = 0; i < c.length(); i++)
    {
        check[c.at(i) - 'A']++;
    }

    bool isPossible = true;

    for (int i = 0; i < 26; i++)
    {
        if (hash[i] != check[i])
        {
            isPossible = false;
            break;
        }
    }

    if (isPossible)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
};