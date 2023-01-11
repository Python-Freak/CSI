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
        arr(hash, 26);
        for (int i = 0; i < 26; i++)
        {
            hash[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < s.length(); j++)
            {
                hash[s.at(j) - 'a']++;
            }
        }
        bool isPossible = true;
        for (int i = 0; i < 26; i++)
        {
            if (hash[i] % n == 0)
            {
                continue;
            }
            else
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
    }

    return 0;
};